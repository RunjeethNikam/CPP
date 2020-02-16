#include<bits/stdc++.h>
using namespace std;
#define lli long long int 
const lli MAX = 150005;
lli t;
lli given[MAX];
lli n;
lli axilary[MAX];
// int main(int argc, char const *argv[])
// {
//     cin>>t;
//     while(t--){
//         cin>>n;
//         memset(given, 0, sizeof(given));
//         for(int i = 1;i<= n;i++){
//             cin>>given[i];
//         }
//         stack<lli> st;
//         lli count = 0;
//         for(int i = 1;i<= n;i++){
//             if(st.empty()){
//                 st.push(given[i]);
//             }
//             else{
//                 while(!(st.empty()) && st.top() > given[i]){
//                     count++;
//                     st.pop();
//                 }
//                 st.push(given[i]);
//             }
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }
int main(int argc, char const *argv[])
{
    cin>>t;
    while (t--)
    {
        cin>>n;
        for(int i = 1;i<= n;i++){
            cin>>given[i];
        }
        axilary[n] = given[n];
        for(int i = n-1;i>= 1;i--){
            axilary[i] = min(given[i], axilary[i+1]);
        }
        lli count = 0;
        for(int i = 1;i<= n;i++){
            if(given[i] > axilary[i])
            count++;
        }
        cout<<count<<endl;
    }
    
    return 0;
}

