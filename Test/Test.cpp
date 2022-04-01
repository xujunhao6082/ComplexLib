// Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "../ComplexLib/ComplexLib.h"
#pragma comment(lib,"../Debug/ComplexLib.lib")
int main()
{
    Complex lib;
    lib.print(lib.Sin(Complex(0,2)));
}
