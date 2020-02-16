#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        string given;
        cin>>given;
        stack<char> st;
        int count = 0;
        for(int i= 0;i<given.size();i++){
            if(given[i] == '<'){
                st.push(given[i]);
            }
            else{
                if(!st.empty() && st.top() == '<'){
                    st.pop();
                }
                else{
                    st.push(given[i]);
                }
            }
            if(st.size() == 0){
                count = max(i+1, count);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
