
#include "pch.h"
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void show(int i) {
	cout << " " << i;
}
vector<int> merge1(vector<int> v, vector<int> v1) {
	int i = 0, j = 0;
	vector<int> ans;
	while ((v.size() + v1.size() -2) >= i + j) {
		if (v[i] <= v1[j]) {
			ans.push_back(v[i]);
			i++;
		}
		else {
			ans.push_back(v1[j]);
			j++;
		}
	}
	return ans;
}
int main()
{
	vector<int> ans1, ans2;
	int A = 85463;
	for (int i = 1; i <= (int)sqrt(A); i++) {
		if (A%i == 0) {
			ans1.push_back(i);
			ans2.push_back(A / i);
		}
	}
	reverse(ans2.begin(), ans2.end());
	for_each(ans1.begin(), ans1.end(), show);
	cout << endl;
	for_each(ans2.begin(), ans2.end(), show);
	vector<int> ans3 = merge1(ans1, ans2);
	for_each(ans3.begin(), ans3.end(), show);
	return 9;
}
