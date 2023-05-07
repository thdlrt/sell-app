#ifndef GETPATH_H
#define GETPATH_H

//
// Created by qwejk on 2022/8/23.
//


#include <string>
#include <vector>

std::string getCurrentPath();    //获取工程当前路径
std::vector<std::string> splitWithStl(const std::string &str,const std::string &pattern);  //分割字符串
std::string formatDobleValue(long double val, int fixed);  //long double浮点数转化为字符串，保留fixed位小数


#endif // GETPATH_H
