#include "pch.h"
#include <iostream>
#include<vector>


using namespace std;


int main()
{
	long long int size;
	cin >> size;
	vector<long long int> given(size);
	for (long long int i = 0; i < size; i++) {
		long long int element;
		cin >> element;
		given[i] = element;
	}
	long long int ans = 1;
	
	for (long long int i = 0; i < size; i++) {
		if (given[i] == -1) {
			ans = (ans * ((given[i - 1] + given[i + 1]) >>1)) % 1000000007;
		}
	}
	cout << ans;

}
