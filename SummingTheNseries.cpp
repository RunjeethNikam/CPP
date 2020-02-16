#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define Mod 1000000007
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
        lli n;
        cin>>n;
        cout<<((n%Mod) * (n%Mod))%Mod;
        cout<<endl;
    }
    return 0;
}
