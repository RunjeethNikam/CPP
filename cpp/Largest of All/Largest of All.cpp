#include <iostream>
#include<algorithm>
#include<vector>
#define lli long long int
using namespace std;

int main()
{
	lli size;
	cin >> size;
	vector<lli> given;
	for (lli i = 0; i < size; i++) {
		lli element;
		cin >> element;
		while (element > 0) {
			given.push_back(element % 10);
			element = element / 10;
		}
	}
	sort(given.begin(), given.end());
	for (lli i = given.size() - 1; i >= 0; i--)
		cout << given[i];
}