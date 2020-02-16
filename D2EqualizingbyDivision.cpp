#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    // int n, k;
    // cin>>n>>k;
    // vector<int> a(n);
    // for(int i = 0;i<n;i++){
    //     cin>>a[i];
    // }
    // set<int> poss;
    // for(int i = 0;i<n;i++){
    //     int x = a[i];
    //     while(x > 0){
    //         poss.insert(x);
    //         x /= 2;
    //     }
    // }
    // int ans = 1e9;
    // sort(a.begin(), a.end());
    // for(auto res : poss){
    //     // cout<<res<<endl;
    //     vector<int> cnt;
    //     for(int i = 0;i<n;i++){
    //         int x = a[i];
    //         int cur= 0;
    //         while(x > res){
    //             x /= 2;
    //             ++cur;
    //         }
    //         if(x == res){
    //             cnt.push_back(cur);
    //         }
    //     }
    //     if(cnt.size() < k)continue;
    //     // sort(cnt.begin(), cnt.end());
    //     ans = min(ans, accumulate(cnt.begin(), cnt.begin()+k, 0));
    //     // cout<<ans<<" "<<res<<endl;
    // }
    // cout<<ans;

    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>> vals(200*1000 + 11);
    for(int i = 0;i<n;i++){
        int x = a[i];
        int cur = 0;
        while(x > 0){
            vals[x].push_back(cur);
            x /= 2;
            cur++;
        }
    }
    int ans = INT_MAX;
    for(int i = 0;i<vals.size();i++){
        sort(vals[i].begin(), vals[i].end());
        if(vals[i].size() <k)
        continue;
        ans = min(ans, accumulate(vals[i].begin(), vals[i].begin()+k,0));
    }
    cout<<ans;
    return 0;
}
