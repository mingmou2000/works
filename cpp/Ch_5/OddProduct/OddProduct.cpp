// OddProduct.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int product = 1;//initialize product

	for (int i = 1; i <= 15; i += 2)
		product *= i;

	cout << "The product of the odd integers from 1 to 15 is " << product << endl;
}