#include "pch.h"
#include <iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;
bool condition(int i, int j) {
	int min_ = min(i, j);
	bool result;
	while (min_ != 0) {
		int last_x = i % 10;
		int last_y = j % 10;
		result = (i % 10 > j % 10) ? true : false;
		i = i / 10;
		j = j / 10;
		min_ = min(i, j);
	}
	
	return result;
}
void show(int i) {
	cout << " " << i;
}
int main()
{
	vector<int> v = { 3, 30, 34, 5, 9 };
	sort(v.begin(), v.end(), condition);
	for_each(v.begin(), v.end(), show);
	string finaly = "";
	for (int i = 0; i <= (v.size() - 1); i++) {
		finaly = finaly + to_string(v[i]);
	}
	cout << finaly;

}