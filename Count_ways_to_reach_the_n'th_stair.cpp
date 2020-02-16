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
    vector<lli> fib(1e5 + 5);
    fib[1] = 1, fib[2] = 2;
    for(lli i = 3;i<fib.size();i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        cout<<fib[n]<<endl;
    }
    return 0;
}
