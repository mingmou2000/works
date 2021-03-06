// EvenNumbers.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

bool isEven(int);

int main()
{
	int num;
	while (cin >> num) {
		//输入检查
		if (num < 0) {
			cout << "Illegal input!" << endl;
			continue;
		}

		//输出
		if (isEven(num))
			cout << num << " is an even number." << endl;
		else
			cout << num << " is an odd number." << endl;
	}
}

bool isEven(int i) {
	return i % 2 == 0;
}