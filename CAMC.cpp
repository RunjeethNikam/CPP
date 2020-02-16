#include<bits/stdc++.h>
using namespace std;
#define lli long long int
struct cmpByStringLength
{
    bool operator()(const pair<lli, lli> &a, const pair<lli, lli> &b) const
    {
        if(a.second == b.second){
            return false;
        }
        return a.first < b.first;
    }
};

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli n, m;
        cin>>n>>m;
        vector<set<lli>> buckets(m);
        for(lli i = 0;i<n;i++){ lli x;
            cin>>x;
            buckets[i%m].insert(x);
        }
        lli result = INT64_MAX;
        vector<pair<lli, int>> points;
        for(lli i = 0;i<m;i++){
            for(auto it = buckets[i].begin();it!= buckets[i].end();it++){
                points.push_back({*it, i+1});
            }
        }
        sort(points.begin(), points.end());
        deque<pair<lli, lli>> q;
        map<lli, lli>mp;
        // lli result = INT64_MAX;
        for(lli i = 0;i<points.size();i++){
            q.push_back(points[i]);
            mp[points[i].second]++;
            if(mp.size() == m){
                while(mp[q.front().second] != 1){
                    result = min(result, q.back().first - q.front().first);
                    mp[q.front().second]--;
                    q.pop_front();
                }
                result = min(result, q.back().first - q.front().first);
            }
            
        }
        cout<<result<<endl;

    }
    return 0;
}
