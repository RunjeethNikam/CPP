#include "pch.h"
#include <iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> A, int b) {
	int start = 0;
	int last = A.size()-1;
	//int mid = (start + last) / 2;
	while (start <= last) {
		int mid = ((start + last) / 2) -1;
		if (A[mid] == b) {
				return mid;
		}
		else if (A[mid] < b) {
			start = mid + 1;
		}
		else if (A[mid] > b) {
			last = mid - 1;
		}
	}
}

int main()
{
	vector<int> v = { 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 7, 7, 8, 8, 8, 8, 9, 9, 10, 10, 10 };
	int location1 = binarySearch(v, 4);
	cout << location1;
}
