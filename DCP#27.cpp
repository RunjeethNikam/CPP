#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    int t;
    cin>>t;
    while (t--)
    {
        string given;
        cin>>given;
        stack<char> st;
        bool flag = true;
        for(auto i : given){
            if(st.empty() || (i == '(' or i == '[' or i == '{') ){
                st.push(i);
            }
            else{
                if(i == ')'){
                    if(st.top() == '('){
                        st.pop();
                    } 
                    else{
                        flag = false;
                    }
                }
                if (i == ']')
                {
                    if (st.top() == '[')
                    {
                        st.pop();
                    }
                    else
                    {
                        flag = false;
                    }
                }
                if (i == '}')
                {
                    if (st.top() == '{')
                    {
                        st.pop();
                    }
                    else
                    {
                        flag = false;
                    }
                }
            }
        }
        cout << ((st.empty() and false) ? "balanced" : "not balanced")<<endl;
    }
    
    return 0;
}
