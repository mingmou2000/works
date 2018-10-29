// PiCalc.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int count = 0;
	double pi = 0;
	for (int i = 1; i <= 1000; i++) {
		if (i % 2 != 0)
			pi += 4.0 / (2 * i - 1);//奇数项
		else
			pi -= 4.0 / (2 * i - 1);//偶数项
		cout << i << "\t" << fixed << setprecision(10) << pi << endl;
	}
}