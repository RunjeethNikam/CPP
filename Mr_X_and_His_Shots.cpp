#include <bits/stdc++.h>
using namespace std;
// #define vi vector<int>
// #define pb push_back
const int N = 1e5+10;
vector<int> A(N),B(N),C(N),D(N);
vector<int> vec1,vec2;
int main(){
	int n,m;
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>A[i]>>B[i];
		vec1.push_back(A[i]), vec2.push_back(B[i]);
	}
	sort(vec1.begin(),vec1.end());
	sort(vec2.begin(),vec2.end());
	long long ans = n*1ll*m;
	for(int i = 1;i<=m;i++){
		cin>>C[i]>>D[i];
		ans -= (vec1.end() - upper_bound(vec1.begin(),vec1.end(),D[i])) ; // we are discarding the pairs which start after the D[i] which are irrelevant
		ans -= (upper_bound(vec2.begin(),vec2.end(),C[i]-1) - vec2.begin()); // we are discarding the pairs 
        // which appear before the C[i] .

        // [a, b] [c, d] do not coincide if b < c or d < a
        // let Fi be the number of shots ith player can't stop 
        // then si = n-Fi we need to find Fi in O(logn)
	}
	cout<<ans;
}