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
        lli l, b;
        cin>>l>>b;
        lli res = l*b;
        if(l == b){
            cout<<1<<endl;
        }
        else{
            for(lli i = 2;i<= min(l, b);i++){
                lli box = i*i;
                if(((l*b) % box) == 0 and l%i == 0 and b%i == 0){
                    res = (l*b)/box;
                }
            }
            cout<<res<<endl;
        }
    }
    return 0;
}
