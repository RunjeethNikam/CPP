#include "pch.h"
#include <iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int size;
	cin >> size;
	vector<int> x(size);
	for (int i = 0; i < size; i++){
		cin >> x[i];
	}
	int count = 1;
	sort(x.begin(), x.end());
	for (int i = 0; i < size-1; i++) {
		if (x[i] - x[i + 1] <= 5) {
			count++;
		}
	}
	cout << count;

}