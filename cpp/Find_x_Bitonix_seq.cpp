#include <bits/stdc++.h>
using namespace std;
#define lli long long int
lli Bitonic(std::vector<lli> given, lli x){
	lli low = 1;
	lli high = given.size()-2;
	while(low <= high){
		lli mid = (low + high) >>1;
		if(given[mid] > given[mid + 1] && given[mid] > given[mid -1])
			return mid;
		else if(given[mid] < given[mid + 1] && given[mid] > given[mid -1]){
			low = mid + 1;
		}
		if(given[mid] > given[mid + 1] && given[mid] < given[mid -1]){
			high = mid - 1;
		}
	}
	return -1;
}

lli BT(std::vector<lli> given, lli x, lli low , lli high){
	while(low <= high){
		lli mid = (low + high) >>1;
		if(given[mid] == x)
			return mid;
		else if(x < given[mid]){
			high = mid - 1;
		}
		if(x > given[mid]){
			low = mid + 1;
		}
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	lli testCases;
	cin>>testCases;
	while(testCases--){
		lli size;
		cin>>size;
		std::vector<lli> given(size);
		for(auto i = 0;i<size;i++)
			cin>>given[i];
		lli x;
		cin>>x;
		lli pivot_location = Bitonic(given, x);
		if(pivot_location == -1)
			cout<<BT(given, x, 0, given.size()-1)<<endl;
		else{
			lli temp = BT(given, x, 0, pivot_location);
			if(temp != -1){
				cout<<temp<<endl;
			}
			else{
				cout<<BT(given, x, pivot_location+1, size-1)<<endl;
			}
		}

		
	}
	return 0;
}
