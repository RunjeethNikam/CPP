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
        stack<lli> st;
        lli result = -1;
        st.push(result);
        for(lli i = 0;i<given.size();i++){
            if(given[i] == ')' and st.top() == -1){
                st.push(i);
            }
            else{ 
                if(given[i] == '('){
                    st.push(i);
                }
                else{
                    lli top = st.top();
                    if(given[top] == '('){
                        st.pop();
                        result = max(result, i - st.top());
                    }
                    else{
                        st.push(i);
                    }
                }
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
