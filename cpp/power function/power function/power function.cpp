#include "pch.h"
#include <iostream>
using namespace std;

int power(long long x,long long y, long long d)
{
	long long temp;
	if (y == 0)
		return 1;
	temp = power(x, y / 2,d);
	if (y % 2 == 0)
		return (temp%d * temp%d)%d;
	else
		return (x%d * temp%d*temp%d)%d;
}

int main()
{
	int x, n, d;
	x = 71045970;
	n = 41535484;
	d = 54735492;
	long long  int remainder = x % d;
	cout << remainder << endl;
	long long product = 1;

	product = power(remainder, n, d);
	cout << product << endl;
	product = product % d;
	if (product < 0) {
		product += d;
	}
	cout << product;
    std::cout << "Hello World!\n"; 
}