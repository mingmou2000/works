// Patterns.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	/* (a) */
	for (int i = 1; i <= 10; i++) {
		for (int j = 0; j < i; j++)
			cout << '*';
		cout << endl;
	}

	cout << endl;

	/* (b) */
	for (int i = 10; i >= 1; i--) {
		for (int j = 0; j < i; j++)
			cout << '*';
		cout << endl;
	}

	cout << endl;

	/* (c) */
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i; j++)
			cout << ' ';
		for (int j = 0; j < 10 - i; j++)
			cout << '*';
		cout << endl;
	}

	cout << endl;

	/* (d) */
	for (int i = 1; i <= 10; i++) {
		for (int j = 0; j < 10 - i; j++)
			cout << ' ';
		for (int j = 0; j < i; j++)
			cout << '*';
		cout << endl;
	}
}