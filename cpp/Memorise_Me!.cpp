#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
	lli N;
	cin>>N;
	unordered_map<int, int> map;
	for(auto i = 0;i<N;i++){
		lli element;
		cin>>element;
		map[element]++;
	}
	lli queries;
	cin>>queries;
	while(queries--){
		lli element;
		cin>>element;
		if(map.find(element) != map.end())
			cout<<map[element];
		else
			cout<<"NOT PRESENT";
		cout<<endl;
	}
	return 0;
}