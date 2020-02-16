#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        lli result = 0;
        result += n/2000;
        n = n%2000;
        result += n/500;
        n = n%500;
        result += n/200;
        n = n%200;
        result += n/100;
        n = n%100;
        result += n/50;
        n = n%50;
        result += n/20;
        n = n%20;
        result += n/10;
        n = n%10;
        result += n/5;
        n = n%5;
        result += n/2;
        n = n%2;
        result += n;
        cout<<result<<endl;        
    }
    return 0;
}
