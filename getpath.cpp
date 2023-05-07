#include "getpath.h"
//
// Created by qwejk on 2022/8/23.
//

#include <charconv>
#include <regex>
#ifdef _WIN32
#include <direct.h>
#include <array>
#else
#include <unistd.h>
#include <sys/stat.h>
#include <sstream>
#endif

std::vector<std::string> splitWithStl(const std::string &str,const std::string &pattern)
{
    std::vector<std::string> resVec;

    if (str.empty()){
        return resVec;
    }
    //方便截取最后一段数据
    std::string strs = str + pattern;

    size_t pos = strs.find(pattern);
    size_t size = strs.size();

    while (pos != std::string::npos){
        std::string x = strs.substr(0,pos);
        resVec.push_back(x);
        strs = strs.substr(pos+1,size);
        pos = strs.find(pattern);
    }

    return resVec;
}

std::string getCurrentPath()
{
    char buf[1024] = "";
    std::string path = std::string();

#ifdef _WIN32

    _getcwd(buf, sizeof(buf));
    std::regex reg("\\\\");
    path = regex_replace(buf, reg, "/");

#else

    getcwd(buf, sizeof(buf));

    path = std::string(buf);

#endif

    return path;
}


#ifdef _WIN32

std::string formatDobleValue(long double val, int fixed) {
    std::array<char, 100> str{}; // char str[10];
    auto [ptr, ec] = std::to_chars(str.data(), str.data() + str.size(), val,
                                   std::chars_format::fixed, fixed);
    if (ec == std::errc()) {
        std::string re_str (str.data(), ptr - str.data());
        return re_str;
    }
    else return {};
}

#else

std::string formatDobleValue(long double value, int precisionAfterPoint)
{
    std::ostringstream out;
    // 清除默认精度
    out.precision(std::numeric_limits<double>::digits10);
    out << value;

    std::string res = std::move(out.str());
    auto pos = res.find('.');
    if (pos == std::string::npos)
        return res;

    auto splitLen = pos + 1 + precisionAfterPoint;
    if (res.size() <= splitLen)
        return res;

    return res.substr(0, splitLen);
}

#endif





