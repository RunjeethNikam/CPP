#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
	lli testCases;
	cin>>testCases;
	while(testCases--) {
	    lli N, K;
	    cin>>N>>K;
	    // if(K == 1){
	    // 	cout<<"NO";
	    // 	continue;
	    // }
	    lli case1 = N/K;
	    if(case1%K == 0)
	    	cout<<"NO";
	    else
	    	cout<<"YES";
	    cout<<endl;

	}
	return 0;
}