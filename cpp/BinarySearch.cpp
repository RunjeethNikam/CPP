#include<bits/stdc++.h>
using namespace std;
int main(){
	int myints[] = {10, 20, 30, 20, 10, 10, 20};
	std::vector<int> v(myints, myints+8);
	sort(v.begin(),v.end());
	auto low = lower_bound(v.begin(), v.end(), 20);
	auto up = upper_bound(v.begin(), v.end(), 20);
	for(auto i = v.begin();i!= v.end();i++){
		cout<<*i<<endl;
	}
	cout<<(low-v.begin())<<" "<<(up - v.begin())<<endl;
	auto flag = binary_search(v.begin(), v.end(), 20);
}