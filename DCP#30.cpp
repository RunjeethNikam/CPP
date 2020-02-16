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
    lli t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        stack<pair<int, int>> st;
        int result = 0;
        for(auto i = 0;i<n;i++){
            int x;
            cin>>x;
            if(st.empty()){
                st.push({x, 1});
            }
            else{
                if(st.top().first >= x){
                    st.push({x, 1});
                }
                else{
                    int count = 0;
                    while(!st.empty() && st.top().first < x){
                        auto top = st.top();st.pop();
                        if(!st.empty()){
                            count += top.second;
                            result += (min(st.top().first, x) - top.first)* (count);
                            
                        }
                    }
                    st.push({x, count+1});
                }
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
