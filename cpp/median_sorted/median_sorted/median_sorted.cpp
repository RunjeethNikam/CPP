#include "pch.h"
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
using namespace std;

float findMedian(vector<int> small, vector<int> big) {
	int x = small.size();
	int y = big.size();
	int low = 0;
	int high = x;
	while (low <= high) {
		int partitionX = (low + high) / 2;
		int partitionY = (x + y + 1) / 2 - partitionX;
		int maxLeftX = (partitionX == 0) ? numeric_limits<int>::min() : small[partitionX - 1];
		int minRightX = (partitionX == x) ? numeric_limits<int>::max() : small[partitionX];

		int maxLeftY = (partitionY == 0) ? numeric_limits<int>::min() : big[partitionY - 1];
		int minRightY = (partitionY == y) ? numeric_limits<int>::max() : big[partitionY];
		if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
			if ((x + y) % 2 == 0) {
				return ((double)max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2;
			}
			else {
				return (double)max(maxLeftX, maxLeftY);
			}
		}
		else if (maxLeftX > minRightY) {
			high = partitionX - 1;
		}
		else {
			low = partitionX + 1;
		}
	}
}

int main()
{
	vector<int> small = { -50, -41, -40, -19, 5, 21, 28 };
	vector<int> big = { -50, -41, -40, -19, 5, 21, 28 };
	cout << findMedian(small, big);
	return 0;
}