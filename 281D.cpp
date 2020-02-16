#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> given){
    stack<int> st;
    int result = INT_MIN;
    int i = 0;
    while(i < given.size()){
        if(st.empty() || st.top() > given[i]){
            st.push(given[i]);
            i++;
        }
        else{
            int last = st.top();
            st.pop();
            result = max(result , last^given[i]);
        }
    }
    while (st.size() > 1)
    {
        int last = st.top();
        st.pop();
        result = max(result, last^st.top());
    }
    return result;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> given(n);
    for(int i = 0;i<n;i++){
        cin>>given[i];
    }
    int mx = solve(given);
    reverse(given.begin(), given.end());
    int maxx = solve(given);
    cout<<max(mx, maxx)<<endl;
    return 0;
}
