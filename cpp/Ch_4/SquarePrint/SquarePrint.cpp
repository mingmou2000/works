// SquarePrint.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size;
	cout << "Enter size of the square (1 to 20): ";
	while (cin >> size) {
		//Illegal Input Check
		if (size < 1 || size > 20) {
			cout << "Illegal Size Input!\nEnter size of the square (1 to 20): ";
			continue;
		}

		//Print
		for (int i = 0; i < size; i++) {
			if (i != 0 && i != size - 1)
				//Print midst lines
				cout << "*" << setw(size - 1) << "*" << "\n";
			else {
				//Print head and tail
				for (int j = 0; j < size; j++)
					cout << "*";
				cout << "\n";
			}
		}

		//Continue
		cout << "\nEnter size of the square (1 to 20): ";
	}
}