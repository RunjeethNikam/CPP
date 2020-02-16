#include<bits/stdc++.h>
using namespace std;
#define lli  int
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli n;
    cin>>n;
    lli sum = 0;
    for(lli i = 0;i<n;i++){
        lli x;
        cin>>x;
        sum += x;
    }
    cout<<sum;
    return 0;
}
