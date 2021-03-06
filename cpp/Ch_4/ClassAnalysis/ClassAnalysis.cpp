// ClassAnalysis.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int passes = 0;
	int failures = 0;
	int studentCounter = 1;
	int result;

	while (studentCounter <= 10) {
		cout << "Enter result (1 = pass, 2 = fail): ";
		cin >> result;

		//Input Check
		if (!cin) {
			//When input is not a integer
			cout << "Illegal Input!\n";
			cin.clear();
			cin.ignore();
			continue;
		}
		if (result != 1 && result != 2) {
			//When input is not 1 or 2
			cout << "Illegal Input!\n";
			continue;
		}

		if (result == 1)
			passes++;
		else
			failures++;

		studentCounter++;
	}

	cout << "Passed " << passes << "\nFailed " << failures << endl;

	if (passes > 8)
		cout << "Bonus to instructor!" << endl;
}