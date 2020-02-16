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
        lli x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        x2 -= x1, x1 = 0;
        y2 -= y1, y1 = 0;
        if(x2 == 0 or y2 == 0){
            cout<<(abs(x2) + abs(y2) -1)<<endl;
            continue;
        }
        lli x = x2;
        lli gcd = __gcd(x2, y2);
        x2 = x2/gcd;
        y2 = y2/gcd;
        lli count = 0;
        for(lli i = abs(x2);i< abs(x);i += abs(x2)){
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
