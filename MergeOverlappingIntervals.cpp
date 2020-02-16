#include<bits/stdc++.h>
using namespace std;
#define lli long long int
bool cmp(pair<lli, lli> a, pair<lli, lli> b){
    if(a.first != b.first){
        return a.first < b.first;
    }
    else{
        return a.second < b.second;
    }
}
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        vector<pair<lli, lli> > given(n);
        for(auto &i : given){
            cin>>i.first>>i.second;
        }
        sort(given.begin(), given.end(), cmp);
        stack<pair<lli, lli>> st;
        for(lli i = 0;i<n;i++){
            if(st.empty()){
                st.push(given[i]);
            }
            else{
                if(st.top().second >= given[i].first){
                    if(st.top().second < given[i].second)
                    st.top().second = given[i].second;
                }
                else{
                    st.push(given[i]);
                }
            }
        }
        stack<pair<lli, lli>> st1;
        while(!st.empty()){
            st1.push(st.top());
            st.pop();
        }
        while(!st1.empty()){
            cout<<st1.top().first<<" "<<st1.top().second<<" ";
            st1.pop();
        }
        cout<<endl;
    }
    return 0;
}
