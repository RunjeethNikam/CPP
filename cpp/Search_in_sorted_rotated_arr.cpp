#include <bits/stdc++.h>
using namespace std;
#define lli long long int
lli BS(std::vector<lli> given, lli x){
	lli low = 0;
	lli high = given.size()-1;
	while(low <= high) {
	    lli mid = (low + high)>>1;
	    // cout<<" mid "<<mid;
	    if(given[mid] == x)
	    	return mid;
	    else if(given[low] <= given[mid]){// left half sorted
	    	if(x < given[mid] && x >= given[low])
	    		high = mid -1;
	    	else
	    		low = mid + 1;
	    }
	 	else if(given[mid] <= given[high]){// right half sorted
	    	if(x > given[mid] && x <= given[high])
	    		low = mid +1;
	    	else
	    		high = mid - 1;
	    }
	}
	return -1;
}
int main(int argc, char const *argv[])
{
	lli t;
	cin>>t;
	while(t--){
		lli size;
		cin>>size;
		std::vector<lli> given(size);
		for(auto i = 0;i<size;i++){
			cin>>given[i];
		}
		lli element;
		cin>>element;
		lli location = BS(given, element);
		cout<<location<<endl;
	}
	return 0;
}