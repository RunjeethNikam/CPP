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
    stack<string> st;
    lli q;
    cin>>q;
    string s = "";
    st.push(s);
    while(q--){
        lli choise;
        cin>>choise;
        if(choise == 1){
            string add;
            cin>>add;
            s += add;
            st.push(s);
        }
        else if(choise == 2){
            lli k;
            cin>>k;
            s = s.substr(0, s.length()- k);
            st.push(s);
        }
        else if(choise == 3){
            lli k;
            cin>>k;
            cout<<s[k-1]<<endl;
        }
        else{
            st.pop();
            s = st.top();
        }
    }
    return 0;
}
