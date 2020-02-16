#include<bits/stdc++.h>
using namespace std;
#define lli long long int
bool solve(string given){
    stack<char> st;
        for(auto &i : given){
            if(i == ')'){
                char top = st.top();
                st.pop();
                bool flag = true;
                while(top != '('){
                    if(top == '+' || top == '-' ||
                    top == '*' || top == '/')
                    flag = false;

                    top = st.top();
                    st.pop();
                }
                if(flag){
                    return flag;
                }
            }
            else{
                st.push(i);
            }
        }
        return false;
}
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
        cout<<solve(given)<<endl;
    }
    return 0;
}
