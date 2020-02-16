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
    lli n, q;
    cin>>n>>q;
    lli gcd;
    cin>>gcd;
    for(lli i = 1;i<n;i++){
        lli x;
        cin>>x;
        gcd = __gcd(gcd, x);
    }
    while(q--){
        lli x;
        cin>>x;
        if(x%gcd){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
