#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        string given;
        cin>>given;
        stack<char> st;
        for(auto &i : given){
            if(st.empty() || i == '{')
            st.push(i);
            else{
                if(st.top() == '{'){
                    st.pop();
                }
                else{
                    st.push(i);
                }
            }
        }
        if(st.empty()){
            cout<<0;
        }
        else if(st.size()&1){
            cout<<-1;
        }
        else{
            lli result = 0;
            while(st.size() > 0){
            char top = st.top();st.pop();
            char last = st.top();st.pop();
                if(top == '{' and last == '}'){
                    result += 2;
                }
                else{
                    result += 1;
                }
            }
            cout<<result;
        }
        cout<<endl;
        
    }
    return 0;
}
