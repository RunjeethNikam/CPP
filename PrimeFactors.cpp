#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli n;
    cin>>n;
    for(int i = 2;i*i<=n;i++){
        if((n%i) ==0){
            while((n%i) == 0){
                cout<<i<<" ";
                n = n/i;
            }
        }
    }
    if(n > 2){
        cout<<n;
    }
    return 0;
}
