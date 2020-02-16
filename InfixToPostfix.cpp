#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli prec(char c){
    if(c == '^')
    return 3;
    if(c == '*' or c == '/')
    return 2;
    if(c == '+' or c == '-')
    return 1;
    else
    {
        return -1;
    }
    
}
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while (t--)
    {
        string given;
        cin>>given;
        stack<char> st;
        string result = "";
        lli i = 0;
        while(i < given.size()){
            if(given[i] >= 'a' and given[i] <= 'z' or given[i] >= 'A' and given[i] <= 'Z'){
                result += given[i];
                i++;
            }
            else{
                if(st.empty()){
                    st.push(given[i]);
                    i++;
                }
                else{
                    if(given[i] == ')'){
                        while(!st.empty() && st.top() != '('){
                            result += st.top();
                            st.pop();
                        }
                        st.pop();
                        i++;
                    }
                    else if(given[i] == '('){
                        st.push(given[i]);
                        i++;
                    }
                    else{
                        if(prec(given[i]) > prec(st.top())){
                            st.push(given[i]);
                            i++;
                        }
                        else{
                            result += st.top();
                            st.pop();
                        }
                    }
                }
            }
        }
        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        cout<<result<<endl;
    }
    
    return 0;
}
