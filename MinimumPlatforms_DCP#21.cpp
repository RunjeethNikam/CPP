#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while (t--)
    {
        lli n;
        cin>>n;
        vector<pair<lli, lli>> time(2*n);
        lli i;
        for(i = 0;i<n;i++){
            string x;
            cin>>x;
            time[i].first = stoi(x);
            time[i].second = 1;
            // cin>>i.first;
        }
        for(i = n;i<2*n;i++){
            string x;
            cin>>x;
            time[i].first = stoi(x);
            time[i].second = 2;
            // cin>>i.second;
        }
        sort(time.begin(), time.end());
        lli result = 0;
        lli j = 0;
        for(auto i : time){
            if(i.second == 1){
                j++;
                result = max(j, result);
            }
            if(i.second == 2){
                j--;
                result = max(j, result);
            }
        }
        cout<<result<<endl;
    }
    
    return 0;
}
