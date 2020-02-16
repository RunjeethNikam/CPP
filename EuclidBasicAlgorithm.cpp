#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli solve(lli a, lli b){
    while(a != b){
        if(a > b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli a, b;
    cin>>a>>b;
    cout<<solve(max(a, b), min(a,b))<<endl;
    return 0;
}
