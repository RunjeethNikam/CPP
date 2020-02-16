#include <iostream>
#include<vector>
#define lli long long int
using namespace std;

int main()
{
	int testCases;
	cin >> testCases;
	lli sum = 0;
	lli N;
	lli product = 1;
	while (testCases--) {
		cin >> N;
		for (lli i = 1; i <= N; i++) {
			product = (product % 1000000007 * i % 1000000007) % 1000000007;
			sum = (sum%1000000007 + product%1000000007) % 1000000007;
		}
		cout << sum<<endl;
		sum = 0;
		product = 1;
	}
}
