#include<bits/stdc++.h>
using namespace std;
long long find(unordered_map<int, int> &mp, int given){
    long long result = 0;
    result += mp[given];
    for(int i = 1;i<=sqrt(given);i++){
        if((given % i) == 0){
            // result += mp[i];
            if(given/i == i)
            mp[i]++;
            else{
                mp[i]++;
                mp[given/i]++;
            }
        }
    }
    return result;
}
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> given(n);
        for(int i = 0;i<n;i++){
            cin>>given[i];
        }
        unordered_map<int, int> mp;
        long long mx = INT_MIN;
        for(int i = 0;i<n;i++){
            long long count = find(mp, given[i]);
            mx = max(count, mx);
        }
        cout<<mx<<endl;
    }
    return 0;
}
