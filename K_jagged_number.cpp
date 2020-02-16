#include<bits/stdc++.h>
using namespace std;
#define lli long long int
bool check(lli n, lli p){
    if(n%2 == 0)
        return n >= p;
    for (lli i = 3; i * i <= n; i++)
    {
        if (n % i == 0)
            return n >= p;
    }
    if(n>2){
        return n >= p;
    }
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli n, k;
    cin>>n>>k;
    if(check(n, k)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
