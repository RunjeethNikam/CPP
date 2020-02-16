#include <bits/stdc++.h>
using namespace std;
#define lli long long int




int main(int argc, char const *argv[])
{

	// same as the largest rectangle problem use a monotone 
	// decrease stack to keep the track of the next next largest
	// number


	lli size;ssssssssss
	cin>>size;
	int ans = 0;
	stack<int> st;
	for(int i = 1;i<= size;i++){
		int v; 
		cin>>v;
		for(;!st.empty();st.pop()){
			int x = st.top();
			ans = max(ans, v^x);
			if(x > v){
				break;
			}
		}
		st.push(v);
	}
	cout<<ans<<endl;
	return 0;
}