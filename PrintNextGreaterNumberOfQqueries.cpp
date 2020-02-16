#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli n;
    cin>>n;
    vector<lli> given(n);
    for(lli i = 0;i<n;i++){
        cin>>given[i];
    }
    stack<lli> st;
    vector<lli> g1(n);
    for(lli i = given.size()-1;i>= 0;i--){
        if(st.empty()){
            st.push(given[i]);
            g1[i] = -1;
        }
        else{
            while(!st.empty() and st.top() < given[i]){
                st.pop();
            }
            if(st.empty()){
                g1[i] = -1;
                st.push(given[i]);
            }
            else{
                g1[i] = st.top();
                st.push(given[i]);
            }
        }
    }
    for(auto i : g1){
        cout<<i<<" ";
    }
    return 0;
}
