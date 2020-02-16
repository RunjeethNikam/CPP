// nCr with dynamic programming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binomialCoeff(int n,int k) {
	vector<vector<int>> C(n+1, vector<int>(k+1));
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= min(i, k); j++) {
			if (j == 0 || j == i) {
				C[i][j] = 1;
			}
			else
				C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
		}
	}
	return C[n][k];
}


int main()
{
	int n = 5, k = 2;
	cout << "values is " << binomialCoeff(n, k);
}