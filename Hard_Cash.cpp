#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll forward(int x, int y);
ll backward(int x, int y);
void solve(vector<ll> given, int n, int k);
int main(int argc, char const *argv[])
{
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        vector<ll> given(n, 0);
        for(auto &i : given){
            cin>>i;
        }
        solve(given, n, k);

    }
    return 0;
}

ll forward(int x, int y){
    return x%y;
}

ll backward(int x, int y){
    if(x%y){
        return (x%y) - y;
    }
    return 0;
}

void solve(vector<ll> given, int n, int k){
        vector<ll> add(n, 0);
        vector<ll> sub(n, 0);
        for(ll i = 0;i<n;i++){
            add[i] = forward(given[i], k);
            sub[i] = backward(given[i], k);
        }
        
        // for(ll i = 0;i<n;i++){
            
        // }
        ll counter = 0;
        for(auto i = n-1;i>=0;i--){
            counter = sub[i] = counter + sub[i];
        }
        counter = 0;
        for(auto i = 0;i<n;i++){
            counter = add[i] = counter + add[i];
        }
        ll result = add.back();
        for(int i = 0;i<n-1;i++){
            if(abs(add[i]) >= abs(sub[i+1])){
                result = min(result, add[i] + sub[i+1]);
            }
        }
        cout<<result<<endl;
}
