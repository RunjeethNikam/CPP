#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
	lli t;
	cin>>t;
	while(t--) {
	    lli N, X;
	    cin>>N>>X;
	    std::vector<lli> given(N);
	    for(auto i = 0;i<N;i++){
	    	cin>>given[i];
	    }
	    sort(given.begin(), given.end());
	    lli l = 0;
	    lli r = N-1;
	    bool flag = false;
	    while(l < r){
	    	// cout<<" l "<<given[l] <<" r "<<given[r]<<endl;
	    	if((given[l] + given[r]) == X){
	    		cout<<"Yes";
	    		flag = true;
	    		break;
	    	}
	    	else if(given[l] + given[r] > X){
	    		r--;
	    	}
	    	else if(given[l] + given[r] < X){
	    		l++;
	    	}
	    }
	    if(!flag)
	    	cout<<"No";
	    cout<<endl;
	}
	return 0;
}