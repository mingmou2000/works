// Palindromes.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int origin;//Oirgin number
	int reversed = 0;//Reversed number
	int temp;
	cout << "Enter a positive integer: ";

	while (cin >> origin) {
		reversed = 0;

		//Input Check
		if (origin <= 0) {
			cout << "Illegal Input!\nEnter a positive integer: ";
			continue;
		}

		//Build reversed number
		temp = origin;
		while (temp != 0) {
			reversed *= 10;
			reversed += temp % 10;
			temp /= 10;
		}

		//Output
		cout << origin;
		if (origin == reversed)
			cout << " is a palindrome.";
		else
			cout << " is not a palindrome.";
		cout << "\n\nEnter a positive integer: ";
	}
}