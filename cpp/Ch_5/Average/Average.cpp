// Average.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int temp;//暂存器
	int count;//计数器
	for (count = 0; cin >> temp; count++) {
		if (temp != 9999)
			sum += temp;
		else
			break;
	}

	if (count != 0)//检查输入数是否为0
		cout << "The average is " << static_cast<double>(sum) / count << endl;
	else
		cout << "Illegal input!" << endl;
}