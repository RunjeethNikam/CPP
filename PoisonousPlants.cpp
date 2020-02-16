// #include<bits/stdc++.h>
// using namespace std;
// #define lli long long int
// int main(int argc, char const *argv[])
// {
//     #ifndef ONLINE_JUDGE
//     freopen("/home/home/cpp/inputf.in", "r", stdin);
//     freopen("/home/home/cpp/outputf.in", "w", stdout);
//     #endif
//     ios_base::sync_with_stdio(0);    
//     lli n;
//     cin>>n;
//     vector<lli> given(n);
//     for(auto &i : given){
//         cin>>i;
//     }
//     stack<lli> st;
//     lli res = 0;
//     for(lli i = n-1;i>= 0;i--){
//         if(st.empty() || st.top() <= given[i]){
//             st.push(given[i]);
//         }
//         else{
//             lli count = 0;
//             while(!st.empty() && st.top() > given[i]){
//                 st.pop();
//                 count++;
//             }
//             res = max(count, res);
//             st.push(given[i]);
//         }
//     }
//     cout<<res<<endl;
//     return 0;
// }




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
    lli n;
    cin>>n;
    vector<lli> a(n);
    for(auto &i : a){
        cin>>i;
        i = -i;
    }
    stack<pair<lli, lli>> s;
    lli maxa= 0;
    for(lli i = 0;i<n;i++){
        if(s.empty())
        {
            s.push({a[i], 0});
        }
        else
        {
            pair<lli, lli> temp = s.top();
            if(a[i] < temp.first){
                int sc = 1;
                maxa = max(maxa, (lli)sc);
                s.push({a[i], sc});

            }
            else{
                pair<lli, lli> v = s.top();
                lli pr = v.second;
                while(!s.empty() && v.first <= a[i]){
                    s.pop();
                    if(s.empty())
                    break;
                    pr = max(pr, v.second);
                    v = s.top();
                }
                if(s.empty()){
                    s.push({a[i], 0});

                }
                else{
                    s.push({a[i], pr+1});
                    maxa = max(maxa, pr + 1);
                }
            }
        }
    }
    cout<<maxa<<endl;
    return 0;
}
            













