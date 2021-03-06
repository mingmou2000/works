// SaleCalc.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	const double PRICE_1 = 2.98;
	const double PRICE_2 = 4.50;
	const double PRICE_3 = 9.98;
	const double PRICE_4 = 4.49;
	const double PRICE_5 = 6.87;
	double sum = 0.0;
	int type = 0;//商品类型标识
	int temp;//零售数量暂存器
	double price = 0;//价格暂存器
	for (int i = 0; i < 5;) {
		cin >> type;
		switch (type) {
		case 1:
			price = PRICE_1;
			break;
		case 2:
			price = PRICE_2;
			break;
		case 3:
			price = PRICE_3;
			break;
		case 4:
			price = PRICE_4;
			break;
		case 5:
			price = PRICE_5;
			break;
		default:
			price = 0;//非法输入标识
			break;
		}
		
		cin >> temp;
		if (price != 0 && temp >= 0) {
			sum += price * temp;
			i++;//合法输入再自增
		} else {
			cout << "Illegal input!\n";
			continue;
		}
	}
	
	cout << "The total retail value is $" << sum << endl;
}