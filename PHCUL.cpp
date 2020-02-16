#include<bits/stdc++.h>
using namespace std;
#define lli long long int
double solve1(lli x,lli y,lli n,lli m,lli k,vector<pair<lli, lli>> N,vector<pair<lli, lli>> M,vector<pair<lli, lli>> K){
    vector<double> d1, d2;
    
    for(auto i = 0;i<M.size();i++){
        double distance = INT64_MAX*1.0;
        for(auto j = 0;j<k;j++){
            double bt = hypot(K[j].first-M[i].first, K[j].second - M[i].second);
            if(distance > bt){
                distance = bt;
            }
        }
        d2.push_back(distance);
    }
    
    for(auto i = 0;i<N.size();i++){
        double total_distance = INT64_MAX*1.0;
        double distance = INT64_MAX*1.0;
        for(auto j = 0;j<m;j++){
            double bt = hypot(M[j].first-N[i].first, M[j].second - N[i].second);
            distance = bt + d2[j];
            if(total_distance > distance){
                total_distance = distance;
            }
        }
        d1.push_back(total_distance);
    }
    double total_distance = INT64_MAX*1.0;
    double distance = INT64_MAX*1.0;
    for(lli i = 0;i<n;i++){
        double bt = hypot(x-N[i].first, y - N[i].second);
        distance = bt + d1[i];
        if(total_distance > distance){
            total_distance = distance;
        }
    }
    // cout<<total_distance<<endl;
    return (double)total_distance;
}
double solve2(lli x,lli y,lli n,lli m,lli k,vector<pair<lli, lli>> N,vector<pair<lli, lli>> M,vector<pair<lli, lli>> K){
    vector<double> d1, d2;
    for(auto i = 0;i<N.size();i++){
        double distance = INT64_MAX*1.0;
        for(auto j = 0;j<k;j++){
            double bt = hypot(K[j].first-N[i].first, K[j].second - N[i].second);
            if(distance > bt){
                distance = bt;
            }
        }
        d2.push_back(distance);
    }
    
    for(auto i = 0;i<M.size();i++){
        double total_distance = INT64_MAX*1.0;
        double distance = INT64_MAX*1.0;
        for(auto j = 0;j<n;j++){
            double bt = hypot(N[j].first-M[i].first, N[j].second - M[i].second);
            distance = bt + d2[j];
            if(total_distance > distance){
                total_distance = distance;
            }
        }
        d1.push_back(total_distance);
    }
    double total_distance = INT64_MAX*1.0;
    double distance = INT64_MAX*1.0;
    for(lli i = 0;i<m;i++){
        double bt = hypot(x-M[i].first, y - M[i].second);
        distance = bt + d1[i];
        if(total_distance > distance){
            total_distance = distance;
        }
    }
    // cout<<total_distance<<endl;
    return (double)total_distance;
}
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
        lli x, y;
        cin>>x>>y;
        lli n, m, k;
        cin>>n>>m>>k;
        vector<pair<lli, lli>> N(n), M(m), K(k);
        for(auto &i:N){
            cin>>i.first>>i.second;
        }
        for(auto &i:M){
            cin>>i.first>>i.second;
        }
        for(auto &i:K){
            cin>>i.first>>i.second;
        }     
        double xx = min(solve1(x, y, n, m, k, N, M, K),solve2(x, y, n, m, k, N, M, K));
        cout << fixed << setprecision(10) <<xx<<endl;
        
        
    }
    return 0;
}
