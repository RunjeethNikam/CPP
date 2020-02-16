#include "pch.h"
#include<algorithm>
#include <iostream>
#include<vector>
using namespace std;

int main()
{
		long long int size;
		cin >> size;
		vector<long long int> given;
		for (int i = 0; i < size; i++) {
			long long int element;
			cin >> element;
			given.push_back(element);
		}
		long long int max2, max1;
		max1 = -9999999999;
		max2 = -9999999999;
		for (int i = 0; i < size; i++) {
			if (given[i] > max1) {
				max1 = given[i];
			}
		}
		for (int i = 0; i < size; i++) {
			if (given[i] > max2 && max1 != given[i]) {
				max2 = given[i];
			}
		}
		if (max2 == -9999999999)
			cout <<"0";
		else
			cout << max2;
}
