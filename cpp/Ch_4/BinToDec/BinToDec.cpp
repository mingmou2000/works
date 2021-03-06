// BinToDec.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int bin;//binary input
	int dec;//decimal output
	int temp;
	cout << "Enter a binary integer: ";

	while (cin >> bin) {
		dec = 0;

		//Input Check
		if (bin < 0 || bin > 111111111) {
			cout << "Illegal Input!\nEnter a binary integer: ";
			continue;
		}

		//Calculate
		temp = 1;
		while (bin != 0) {
			//binary check
			if (bin % 10 > 1) {
				cout << "Illegal Input!\nEnter a binary integer: ";
				dec = -1;//sign for illegal input
				break;
			}

			dec += bin % 10 * temp;
			temp *= 2;
			bin /= 10;
		}

		//Output
		if (dec == -1)
			continue;
		cout << "(Decimal): " << dec << "\nEnter a binary integer: ";
	}
}