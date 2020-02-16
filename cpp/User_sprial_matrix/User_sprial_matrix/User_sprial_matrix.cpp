#include "pch.h"
#include <iostream>
using namespace std;
#include<vector>
int main()
{
	int size = 5;
	int n = size * 2 - 1;
	vector<vector<int>> fin(n, vector<int> (n));
	int row_start = 0, row_end = n-1;
	int col_start = 0, col_end = n-1;
	while (row_start <= row_end  && col_start <= col_end) {
		for (int i = col_start; i <= col_end; i++) {
			fin[row_start][i] = size;
		}
		row_start++;
		for (int i = row_start; i <= row_end; i++) {
			fin[i][col_end] = size;
		}
		col_end--;
		for (int i = col_end; i >= col_start; i--) {
			fin[row_end][i] = size;
		}
		row_end--;
		for (int i = row_end; i >= row_start; i--) {
			fin[i][col_start] = size;
		}
		col_start++;
		size--;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << fin[i][j] << " ";
		}
		cout << endl;
	}
}