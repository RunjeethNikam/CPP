#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
	lli testCases;
	cin>>testCases;
	while(testCases--){
		lli d = 0, b = 0;
		

		string given;
		cin>>given;
		

		for(int i = 0;i<given.length();i++){
			cout<<given.substr(i, 1)<<endl;
			if(given.substr(i, 1) == ">")
				d--;
			else
				d++;
			if(d == 0)
				b = i + 1;
			else if(d < 0)
				break;
		}
		cout << b<<endl;




	}
	return 0;
}