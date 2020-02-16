#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli a, b;
lli gcd(lli x, lli y){
    if(x == 0){
        a = 0;
        b = 1;
        return y;
    }
    lli gcdd = gcd(y%x, x);
    lli x1 = a, y1 = b;
    a = y1 - (y/x)* x1;
    b = x1;
    return gcdd;
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli x, y;
    cin>>x>>y;
    lli gcdd = gcd(x, y);
    cout<<gcdd<<" "<<a<<" "<<b<<endl;
    return 0;
}
