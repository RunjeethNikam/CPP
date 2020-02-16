#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
	lli testCases;
	cin>>testCases;
	while(testCases--) {
	    lli size;
	    cin>>size;
	    std::vector<lli> given(size);
	    for(auto i = 0;i<size;i++)
	    	cin>>given[i];
	    reverse(given.begin(), given.end());
	    std::vector<lli> D(size);
	    D[0] = 1;
	    for(auto i = 1;i<size;i++){
	    	if((given[i] ^ given[i-1]) < 0){// exor of + and - is always negative
	    		D[i] = D[i-1] +  1;
	    		// cout<<"hi";
	    	}
	    	else
	    		D[i] = 1;
	    }
	    reverse(D.begin(), D.end());
	    for(auto i = 0;i<size;i++)
	    	cout<<D[i]<<" ";
	    cout<<endl;
	}
	return 0;
}