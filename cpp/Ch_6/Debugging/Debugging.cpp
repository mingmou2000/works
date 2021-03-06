#include <pch.h>
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setprecision;

int main()
{
	int i = 1;
	int j = 0;
	double a;
	double b;

	cout << setprecision(2);

	for (; i <= 2; i++) {
		cout << "i is now equal to " << i << endl;

		j = 0;
		for (; j <= 3; j++) {
			cout << "\tj is now equal to " << j << endl;

			cout << "\t\ti + j = " << i + j << "\ti - j = " << i - j << endl;
			cout << "\t\ti * j = " << i * j << "\ti ^ j = " << pow(static_cast<double>(i), j) << endl;

			if (j == 0)
				continue;
			else
			{
				a = i;
				b = j;
				cout << "\t\ti / j = " << a / b << "\ti % j = " << i % j << endl;
			}
		}
	}

	cout << "\nThe final values of i and j are: " << i << " and " << j << endl;

	return 0;
}
