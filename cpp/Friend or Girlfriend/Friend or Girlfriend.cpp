#include <iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;

int countSubstrs(string s1, string s2, long long int count)
{
	long long n = s2.size();
	for (int i = 0; i < n; i++)
		for (int len = 1; len <= n - i; len++)
			if (s2.substr(i, len).find(s1))
				count++;
	return count;
}


int main()
{
	long long int testCases;
	cin >> testCases;
	while (testCases--)
	{
		string given, single;
		long long int n;
		cin >> n;
		cin >> given >> single;
		long long int count = 0;
		string s1 = single, s2 = given;
		cout << countSubstrs(s1, s2, count);
	}
}


