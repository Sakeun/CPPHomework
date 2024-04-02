#pragma once
#include <string>

class FunctionTemplate
{
public:
    template <typename T>
    static T add(T x, T y);

};

template int FunctionTemplate::add<int>(int x, int y);
template double FunctionTemplate::add<double>(double x, double y);
template std::string FunctionTemplate::add<std::string>(std::string x, std::string y);

