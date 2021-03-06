// Salary.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int hours;
	double rate;
	double salary;
	cout << "Enter hours worked (-1 to end): ";
	while (cin >> hours) {
		//End Check
		if (hours == -1)
			break;

		//Positive Hours Check
		if (hours <= 0) {
			cout << "Illegal Hours Input!\nEnter hours worked (-1 to end): ";
			continue;
		}
		cout << "Enter hourly rate of the employee ($00.00): ";

		//Positive Rate Check
		while (cin >> rate) {
			if (rate <= 0) {
				cout << "Illegal Rate Input!\nEnter hourly rate of the employee ($00.00): ";
				continue;
			} else {
				break;
			}
		}

		//Calculate Salary
		if (hours <= 40)
			salary = hours * rate;
		else
			salary = 40 * rate + (hours - 40) * rate * 1.5;

		//Output
		cout << "Salary is $" << fixed << setprecision(2) << salary << "\n\nEnter hours worked (-1 to end): ";
	}
}