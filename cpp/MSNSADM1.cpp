#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
	lli t;
	cin>>t;
	lli max = -1;
	while(t--) {
	    lli size;
	    cin>>size;
	    std::vector<lli> goals(size);
	    for(auto i = 0;i<size;i++)
	    	cin>>goals[i];
	    std::vector<lli> fouls(size);
	    for (int i = 0; i < size; ++i)
	    {
	    	cin>>fouls[i];
	    }
	    for(auto i = 0;i<size;i++){
	    	lli positive = goals[i] * 20;
	    	lli negative = fouls[i] * 10;
	    	lli result = positive - negative;
	    	if(result < 0)
	    		result = 0;
	    	if(result > max)
	    		max = result;
	    }
	    cout<<max<<endl;
	    max = -1;

	}
	return 0;
}