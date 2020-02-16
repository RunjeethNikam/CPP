#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    string given;
    cin>>given;
    stack<string> st;
    for(auto it = given.rbegin();it != given.rend();it++){
        if(*it >= 'A' and *it <= 'Z'){
            st.push(string(1, *it));
        }
        else{
            string last = st.top();st.pop();
            string secondLast = st.top();st.pop();
            last =   last +secondLast  + string(1,*it);
            st.push(last);
        }
    }
    cout<<st.top();
    return 0;
}
