#include "pch.h"
#include <iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main()
{
	string given;
	long long int count = 1;
	cin >> given;
	for (char element : given) {
		if (isupper(element)) {
			count++;
		}
	}
	cout << count;
}