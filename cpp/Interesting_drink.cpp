#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    lli no_shops;
    cin>>no_shops;
    vector<lli> shops(no_shops);
    for(lli i = 0;i<no_shops;i++){
        cin>>shops[i];
    }
    sort(shops.begin(), shops.end());
    lli q;
    cin>>q;
    while(q--){
        lli limit;
        cin>>limit;
        auto up = upper_bound(shops.begin(), shops.end(), limit);
        cout<<(up - shops.begin())<<endl;
    }
    return 0;
}
