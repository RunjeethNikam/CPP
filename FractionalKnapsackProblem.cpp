#include<bits/stdc++.h>
using namespace std;
#define lli long long int
bool cmp(pair<lli, lli> a, pair<lli, lli> b){
    return (((float)a.first / a.second) > ((float)b.first / b.second));
    // sort according to highest perkg profit
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli capacity;
    cin>>capacity;
    lli no_items;
    cin>>no_items;
    vector<pair<lli, lli>> items(no_items);
    for(auto &i:items){
        cin>>i.first>>i.second;
    }
    sort(items.begin(), items.end(), cmp);
    lli current_wt = 0;
    float sum = 0;
    for(auto &i:items){
        if(current_wt + i.second <= capacity){
            current_wt += i.second;
            sum += i.first;
        }
        else{
            lli remaining_wt = capacity - current_wt;
            sum += i.first*((double)remaining_wt/i.second);// (2 parts of 3)
            break;
        }
    }
    cout<<sum<<endl;
    return 0;
}
