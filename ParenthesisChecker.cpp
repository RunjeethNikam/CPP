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
        string given;
        cin>>given;
        stack<char> st;
        bool flag = true;
        for(auto i : given){
            if(i == '(' or i == '[' or i == '{'){
                st.push(i);
            }
            if(i == ')'){
                if(!st.empty() &&st.top() == '('){
                    st.pop();
                    continue;
                }
                flag = false;
                break;
            }
            if(i == '}'){
                if(!st.empty() && st.top() == '{'){
                    st.pop();
                    continue;
                }
                flag = false;
                break;
            }
            if(i == ']'){
                if(!st.empty() && st.top() == '['){
                    st.pop();
                    continue;
                }
                flag = false;
                break;
            }
        }

        if(st.empty() and flag){
            cout<<"balanced";
        }
        else{
            cout<<"not balanced";
        }
        cout<<endl;
    }
    return 0;
}
