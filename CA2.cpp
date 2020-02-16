// #include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> st;
void solve1(vector<int> &given,int i,int sum){
    if(i == given.size()){
        // cout<<sum<<" ";
        st.push_back(sum);
        return;
    }
    solve1(given, i+1, sum+given[i]);
    solve1(given, i+1, sum);

}
void solve(vector<int> &given){
    int sum = 0;
    // for(int i= 0;i<given.size();i++){
    //     sum+= given[i];
    // }
    solve1(given, 0, 0);
    sort(st.begin(), st.end());
    
    for(auto it = st.begin();it!= st.end();it++){
        cout<<*it<<" ";
    }
}
int main() {
	//code
    
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
	    vector<int> given(n);
	    for(int i = 0;i<n;i++){
	        cin>>given[i];
	    }
	    solve(given);
        // st.clear();
        st.clear();
	    cout<<endl;
	}
	return 0;
}