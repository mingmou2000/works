// Diamond.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int spaceNum;//空格数量
	int astNum;//星号数量
	for (int i = 1; i <= 9; i++) {
		if (i <= 5) {
			//上半部分
			spaceNum = 5 - i;
			astNum = 2 * i - 1;
		} else {
			//下半部分
			spaceNum = i - 5;
			astNum = 19 - 2 * i;
		}

		for (int j = 0; j < spaceNum; j++)
			cout << ' ';
		for (int j = 0; j < astNum; j++)
			cout << '*';

		cout << endl;
	}
}