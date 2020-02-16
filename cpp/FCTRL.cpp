#include <bits/stdc++.h>
#define lli long long int
using namespace  std;

int main(int argc, char const *argv[])
{
	lli testCases;
	cin>>testCases;
	while(testCases--){
		lli given;
		cin>>given;
		lli iterator = 5;
		lli result = 0;
		while(given/iterator != 0){
			result += given/iterator;
			iterator *= 5;
		}
		cout<<result<<endl;
	}
	return 0;
}