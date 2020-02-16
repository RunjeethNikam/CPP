#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int A = 9330675566;
	int start = 0;
	int end = A / 2;
	if (A == 2 || A == 1|| A == 3) {
		cout << 1 << endl;
	}
	while (start <= end) {
		int mid = (start + end) / 2;
		cout << " start " << start << " end " << end << " mid ";
		cout << mid << endl;
		if ((mid % 1000000007)*(mid % 1000000007) == (A % 1000000007)) {
			cout << mid << endl;
			break;
		}
		else if ((mid % 1000000007)*(mid%1000000007) > A%1000000007) {
			end = mid - 1;
		}
		else {
			if (((mid + 1) % 1000000007) * ((mid + 1) % 1000000007) > (A % 1000000007)){
				cout << mid << endl;
				break;
			}
			else
				start = mid + 1;
		}
	}
}