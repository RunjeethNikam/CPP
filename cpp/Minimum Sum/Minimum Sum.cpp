#include <iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#define lli long long int
using namespace std;

//2 = 0 1 0
//3 = 0 1 1
//4 = 1 0 0 
//5 = 1 0 1
//6 = 1 1 0

//x = 1 1 0 becoz the 3rd col has 2 zeros and 3 ones to make minimum sum after exor we will make these ones zeros
// sum can be found out by: in first col after exor 2 bits are one so 2 * (2^0)
// same in 2nd col after exor 2 bits are one so 2*(2^1)
// same in 3nd col after exor 2 bits are one so 2*(2^3)



int main()
{
	lli testCases;
	cin >> testCases;
	while (testCases--) {
		lli numbers;
		lli sum = 0;
		cin >> numbers;
		vector<lli> given(numbers);
		for (lli i = 0; i < numbers; i++) {
			cin>>given[i];
		}
		for (int i = 0; i <= 30; i++) {
			int zeros = 0;
			int ones = 0;
			for (lli j = 0; j < numbers; j++) {
				if ((given[j] & (1LL << i)) == 0) {
					zeros++;
				}
				else
					ones++;
			}
			if (zeros > ones)
				sum = sum + (ones * (1LL << i));
			else
				sum = sum + (zeros * (1LL << i));
		}
		cout << sum<<endl;
	}
}

// time complexity O(N*B) per testcases B is the bits


// to store 10^9 30 bits are required