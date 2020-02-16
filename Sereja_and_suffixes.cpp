#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int N, M;
    cin>>N>>M;
    vector<int> given(N+1);
    for(int i = 1;i<=N;i++){
        cin>>given[i];
    }
    set<int> st;
    vector<int> dp(N+1);
    for(int i  = N;i>0;i--){
        st.insert(given[i]);
        dp[i] = st.size();
    }
    for(int i = 0;i<M;i++){
        int x;
        cin>>x;
        cout<<dp[x]<<endl;
    }
    return 0;
}
