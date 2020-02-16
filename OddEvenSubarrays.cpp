#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
    ll n;
    cin>>n;
    vector<ll> given;
    for(auto i = 0;i<n;i++){
        ll x;
        cin>>x;
        if(x&1){
            given.push_back(-1);
        }
        else{
            given.push_back(1);
        }
    }
    ll count = 0;
    ll result = 0;
    map<ll, ll> mp;
    for(auto i : given){
        count += i;
        if(mp[count]){
            mp[count]++;
            if(count == 0)
            result += mp[count];
            else{
                result += mp[count]-1;
            }
        }
        else{
            mp[count]++;
            if(count == 0){
                result += 1;
            }
        }
    }
    cout<<result<<endl;
    return 0;
}
