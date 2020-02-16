#include "pch.h"
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int testcases;
	cin >> testcases;
	while (testcases--) {
		int n;
		cin >> n;
		vector<int> row(n), col(n);
		for (int i = 0; i < n; i++) {
			row[i] = col[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				int x;
				cin >> x;
				row[i] += x;
				col[j] += x;
			}
		}
		
		/*for (int element : row)
			cout << element << " ";
		cout << endl;
		for (int element : col)
			cout << element << " ";
*/
		sort(row.begin(), row.end());
		sort(col.begin(), col.end());
		bool ok = true;
		for(int i = 0;i<n;i++)
		if (row[i] != col[i]) {
			ok = false;
		}
		if (ok)
			cout << "possible";
		else
			cout << "Impossible";
	}
}