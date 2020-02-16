#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli bits(lli n){
    return (int)log2(n) + 1;
}
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli a, b, n;
        cin>>a>>b>>n;
        lli c_xor = a^b;
        lli hi = 1;
        lli bit = (max(bits(a), bits(b)) > 3)?(max(bits(a), bits(b))):3;
        for(lli i = 2;i<= bit;i++){
            hi = hi<<1;
            hi += 1;
        }
        lli c_xnor = c_xor^hi;
        if(n%3==0){
            cout<<max(c_xnor, c_xor);
        }
        else if(n%3 == 1){
            cout<<a;
        }
        else{
            cout<<b;
        }
        cout<<endl;
    }
    return 0;
}
