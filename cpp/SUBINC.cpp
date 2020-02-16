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
		std::vector<lli> given(size);
		std::vector<lli> D(size);
		D[0] = 1;
		for(auto i = 0;i<size;i++)
			cin>>given[i];
		for(auto i = 1;i<size;i++){
			if(given[i-1] <= given[i])
				D[i] = D[i-1] + 1;
			else{
				D[i] = 1;
			}
		}
		lli sum = 0;
		for(auto i = 0;i<size;i++)
			sum += D[i];
		cout<<sum<<endl;
	}
	return 0;
}