#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
	lli testCases;
	cin>>testCases;
	while(testCases--){
		lli size;
		cin>>size;
		std::vector<lli> given(size+1);
		for(auto i = 1; i<= size;i++){
			cin>>given[i];
		}
		lli K;
		cin>>K;
		lli length = given[K];
		sort(given.begin(), given.end());
		for (int i = 1; i <= given.size();i++)
		{
			if(length == given[i]){
				cout<<i; break;
			}
		}
		cout<<endl;
	}
	return 0;
}