#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli power(lli n, lli a){

}
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
        lli n, a;
        cin>>n>>a;
        lli res = power(n, a);
        cout<<res<<endl;
    }
    return 0;
}
