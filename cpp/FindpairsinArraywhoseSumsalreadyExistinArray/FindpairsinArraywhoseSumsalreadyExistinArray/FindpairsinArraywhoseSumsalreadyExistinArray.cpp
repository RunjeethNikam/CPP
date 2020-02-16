#include "pch.h"
#include <iostream>
#include<unordered_set>
using namespace std;
void findPair(int arr[], int n) {
	unordered_set<int> s;
	for (int i = 0; i < n; i++) {
		s.insert(arr[i]);
	}
	bool found = false;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (s.find(arr[i] + arr[j]) != s.end()) {
				cout << arr[i] << " " << arr[j] << endl;
			}
		}
	}
}


int main()
{
	int arr[] = { 10, 4, 8, 13, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	findPair(arr, n);
	return 0;
}
