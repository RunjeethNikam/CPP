#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli size;
        cin>>size;
        vector<lli> given(size);
        for(int i = 0;i<size;i++){
            cin>>given[i];
        }
        vector<lli> result(size);
        stack<lli> st;
        for(int i = 0;i<size;i++){
            if(st.empty()){
                result[i] = i+1;
            }
            else{
                while(!st.empty() and (given[st.top()] <= given[i])){
                    st.pop();
                }
                if(st.empty()){
                    result[i] = i+1;
                }   
                else
                result[i] = i-st.top();
            }
            st.push(i);
        }
        for(auto i: result){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
