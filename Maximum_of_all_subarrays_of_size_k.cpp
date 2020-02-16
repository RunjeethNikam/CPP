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
    while(t--){
        lli n, k;
        cin>>n>>k;
        vector<lli> given(n);
        for(auto &i : given){
            cin>>i;
        }
        deque<lli> dq;
        vector<lli> result;
        lli i;
        for (i = 0; i < k; i++)
        {
            while(!dq.empty() && given[dq.back()] <= given[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        result.push_back(given[dq.front()]);
        for(;i<given.size();i++){
            while (!dq.empty() && dq.front() <= i-k)
            {
                dq.pop_front();
            }
            while (!dq.empty() && given[dq.back()] <= given[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
            result.push_back(given[dq.front()]);
        }
        // result.push_back(given[dq.front()]);
        for(auto i:result){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
