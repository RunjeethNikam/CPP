#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int x, y;
int Gcd(int a, int b){
    if(a == 0){
        x = 0;
        y = 1;
        return b;
        
    }
    Gcd(b%a, a);
    int x1 = x, y1 = y;
    x = y1 -(b/a) * x1;
    y = x1;

}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli a, b;
    cin>>a>>b;
    Gcd(a, b);
    cout<<x<<y<<endl;
    return 0;
}
