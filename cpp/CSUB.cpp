#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main(int argc, char const *argv[])
{
	lli testCases;
	cin>>testCases;
	while(testCases--){
		lli length;
		cin>>length;
		string given;
		cin>>given;
		lli count=0;
		for(auto i = 0;i<given.length();i++){
			if(given[i] == '1')
				count++;
		}
		cout<<(count *(count + 1)/2)<<endl;
	}
	return 0;
}