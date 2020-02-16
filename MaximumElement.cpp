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
    stack<lli> st, temp;
    lli n;
    cin>>n;
    for(lli i = 0;i<n;i++){
        lli choise;
        cin>>choise;
        if(choise == 1){
            lli element;
            cin>>element;
            if(st.empty()){
                st.push(element), temp.push(element);
                continue;
            }
            else{
                if(!temp.empty() &&temp.top()<element){
                    temp.push(element);
                }
                else{
                    temp.push(temp.top());
                }
            }
            st.push(element);
        }
        else if(choise == 2){
            st.pop();
            temp.pop();
        }
        else{
            cout<<temp.top()<<endl;
        }
        // cout<<endl;
    }
    return 0;
}
