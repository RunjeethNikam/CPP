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
        lli a, b, x, y;
        cin>>a>>b>>x>>y;
        if(__gcd(a,b) != __gcd(x, y) ){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
