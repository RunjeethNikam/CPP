#include <iostream>
#include<cmath>
#define lli long long int
using namespace std;
lli digitSum(lli N) {
	lli sum = 0;
	while (N>0)
	{
		sum = sum + N % 10;
		N = N / 10;
	}
	return sum;
}

bool isPrime(lli number) {
	for (lli i = 2; i <= sqrt(number); i++) {
		if (number % i == 0)
			return false;
	}
	return true;
}


int main()
{
	int testCases;
	cin >> testCases;
	while (testCases--) {
		int a, N;
		cin >> a >> N;
		lli power = pow(a, N);

		//cout << power << endl;
		power = digitSum(power);
		//cout << power << endl;
		if (isPrime(power))
			cout << "1";
		else
			cout << "0";
		cout << endl;
	}
}