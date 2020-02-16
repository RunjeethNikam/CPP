#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli solve(lli n){
    lli result = 1;
    result += 2*(n);
    result += n*(n-1);
    result += n*(n-1)*(n-2)/2;
    return result;
}
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}
