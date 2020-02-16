#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli size;
    cin>>size;
    string given;
    cin>>given;
    stack<lli> st;
    for(auto i: given){
        if(st.empty()){
            st.push(i - '0');
        }
        else{
            if((i-'0') %2 == 0 ){
                if(st.top()%2 == 0 ){
                    st.pop();
                }
                else{
                    st.push(i-'0');
                }
            }
            else{
                if(st.top()%2 == 1){
                    st.pop();
                }
                else{
                    st.push(i-'0');
                }
            }
        }
    }
    if(st.size() == 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
