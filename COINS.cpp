#include<bits/stdc++.h>
using namespace std;
#define lli long long
map<lli, lli> mp;
lli solve(lli x){
    if(x == 0){
        return 0;
    }
    lli h = mp[x];
    if(h){
        return h;
    }
    else{
        h = max(x, (solve(x/2)+solve(x/3)+solve(x/4)));
        mp[x] = h;
    }
    return h;

}
int main(int argc, char const *argv[])
{
    lli x;
    while(cin>>x){
        cout<<solve(x)<<endl;
    }
    return 0;
}
