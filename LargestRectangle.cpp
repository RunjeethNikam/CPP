#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    vector<int> given(n);
    for(int i = 0;i<n;i++){
        cin>>given[i];
    }
    stack<int> st;
    int i =0;
    while(i<n){
        if(st.empty()){
            st.push(i);
            i++
        }
        else{
            while(!st.empty() && given[st.top()] > given[i]){
                int top = st.top();
                int area = given[top] * (i- top);
            }
        }
    }
    return 0;
}
