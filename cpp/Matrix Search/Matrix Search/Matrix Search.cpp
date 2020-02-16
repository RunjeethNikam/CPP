#include "pch.h"
#include <iostream>
#include<vector>
using namespace std;
#include<algorithm>
void show(int i) {
	cout << " " << i;
}

int binarySearch(vector<int> arr, int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle 
		// itself 
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then 
		// it can only be present in left subarray 
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		// Else the element can only be present 
		// in right subarray 
		return binarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not 
	// present in array 
	return -1;
}

int main()
{
	vector<vector<int>> A = { {1} };
	int x = 1;
	int last = A[0].size();
	cout << last;
	for (int i = 0; i <= A.size() - 1; i++) {
		if (A[i][0] <= x && A[i][last - 1] >= x) {
			int pos = binarySearch(A[i], 0, A[i].size() - 1, x);
			if (pos == -1) {
				return 0;
			}
			else
				return 1;
		}
	}
	//for_each(B[i].begin(), B[i].end(), show);

}