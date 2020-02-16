#include "pch.h"
#include <iostream>
#include <utility>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<vector<int>> given = { {1,2,3},{4,5,6},{7,8,9} };
	vector<vector<int>> finaly;
	for (int i = 2; i <= (2 * given.size()); i++) {
		vector<int> row;
		for (int x_axis = 1; x_axis < i; x_axis++) {
			int y_axis = i - x_axis;
			if (x_axis <= given.size() && y_axis <= given.size()){
				cout << " x " << x_axis << " y " << y_axis<<endl;
				row.push_back(given[x_axis][y_axis]);
			}
		}
		finaly.push_back(row);
	}
	for (int i = 0; i < finaly.size(); i++) {
		for (int j = 0; finaly[i].size(); j++) {
			cout << finaly[i][j]<<" ";
		}
		cout << " " << endl;
	}

}
