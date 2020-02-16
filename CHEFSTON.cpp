#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli n, k;
        cin>>n>>k;
        vector<pair<lli, lli>> given(n);
        for(auto &i : given){
            cin>>i.first;
        }
        for(auto &i : given){
            cin>>i.second;
        }
        lli sum = -1;
        for(auto i : given){
            sum = max(sum , (k/i.first)* i.second);
        }
        cout<<sum<<endl;
    }
    return 0;
}
