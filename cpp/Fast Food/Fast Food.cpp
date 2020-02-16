#include <iostream>
#include<vector>
#include<algorithm>
#define lli long long int
using namespace std;
int main()
{
	lli testcases;
	cin >> testcases;
	while (testcases--) {
		vector<lli> Ai, Bi;
		lli number_of_days;
		cin >> number_of_days;
		lli sumA=0, sumB=0, sum=0;
		for (lli i = 0; i < number_of_days; i++) {
			int element;
			cin >> element;
			Ai.push_back(element);
			sumA += element;
		}
		for (lli i = 0; i < number_of_days; i++) {
			int element;
			cin >> element;
			Bi.push_back(element);
			sumB += element;
		}
		lli sum2 = sumB;
		lli sum1 = 0;
		for (lli i = 0; i < number_of_days; i++) {
			sum1 += Ai[i];
			sumB -= Bi[i];
			if (sum2 < (sum1 + sumB))
				sum2 = sum1 + sumB;
		}
		if (sum2 < sumA)
			sum2 = sumA;
		cout << sum2<<endl;
	}
}