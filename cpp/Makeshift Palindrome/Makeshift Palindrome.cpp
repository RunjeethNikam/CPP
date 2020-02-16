#include <iostream>
#include<vector>
#include<map>
#define lli long long int
using namespace std;
int main()
{
	int testCases;
	cin >> testCases;
	lli size;
	while (testCases--) {
		cin >> size;
		vector<lli> given(size);
		map<lli, lli> freq;
		for (int i = 0; i < size; i++) {
			cin >> given[i];
			freq[given[i]]++;
		}
		if (size & 1) {
			// odd
			int count = 0;
			for (auto element : freq) {
				if (element.second % 2 != 0) {
					count++;
				}
			}
			if (count == 1) {
				cout << "YES";
			}
			else {
				cout << "NO";
			}
		}
		else {
			int count = 0;
			for (auto element : freq) {
				if (element.second % 2 != 0) {
					count++;
				}
			}
			if (count != 0) {
				cout << "NO";
			}
			else {
				cout << "YES";
			}
		}
		cout << endl;
	}
}
