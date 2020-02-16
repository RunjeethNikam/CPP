// kadani's.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v1 = {4,-3,-2,2,3,1,-2,-3,4,2,-6,-3,-1,3,1,2};
	int start, end, s = 0;
	int max_so_far = 4;
	int max_end_here = 0;
	for (auto i = v1.begin(); i != v1.end(); i++) {
		max_end_here = max_end_here + *i;
		if (max_so_far < max_end_here) {
			 max_so_far = max_end_here;
			 start = s;
			 end = i;
		}
		if (max_end_here < 0) {
			max_end_here = 0;
			s = i+1
		}
	}
	cout << max_so_far;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
