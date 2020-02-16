// curiosity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<vector>
using namespace std;
//vector<long long> factoral(1000, 0);



int main()
{
	//factoral[1] = 1;
    //std::cout << "Hello World!\n"; 
	int testCases;
	cin >> testCases;
	while (testCases--) {
		int N;
		cin >> N;
		if (N == 1) {
			cout << "YES" << endl;
		}
		else{
			int hi;
			if (N & 1) {
				//cout << "odd";
				hi = (N + 1) / 2;
			}
			else {
				//cout << "even";
				hi = (N + 1)*N / 2;
			}

			bool flag = false;
			for (int i = 2; i < N; i++) {
				if (hi%i == 0) {
					hi /= i;
				}
				if (hi == 1) {
					cout << "YES" << endl;
					flag = true;
					break;
				}
			
			}
			if (flag == false) {
				cout << "NO" << endl;
			}
		}
	}
}