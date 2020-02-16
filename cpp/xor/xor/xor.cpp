#include "pch.h"
#include <iostream>
#include<set>
#include<set>
#include<vector>
using namespace std;

int main()
{
	long long int size;
	cin >> size;
	int x = 0;
	
	for (int i = 0; i < size; i++) {
		long long int element;
		cin >> element;
		x ^= element;
	}
	
	if (x)
		cout << -1;
	else cout << 1;
}
