#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli solve(lli base,lli power){
    if(power == 0){
        return 1;
    }
    if(power == 1){
        return base;
    }
    else if(power&1){
        return base*solve(base*base, (power-1)/2);
    }
    else{
        return solve(base*base, power/2);
    }
}
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli base, power;
    cin>>base>>power;
    lli ans;
    if(power&1){
        ans = base*solve(base, power-1);
    }
    else{
        ans = solve(base, power);
    }
    cout<<ans<<endl;
    return 0;
}
