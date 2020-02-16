#include<bits/stdc++.h>
using namespace std;
#define lli long long int
main(){
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    lli t;
    cin>>t;
    while(t--){
        lli n, k;
        cin>>n>>k;

        // k = 3*k;
        vector<lli> given(n);
        for(lli i = 0;i<n;i++){
            cin>>given[i];
        }
        if(n&1){
            if(k > (n/2)){
                given[n/2] = 0;
            }
        }
        k = k%(3*n);
        for(lli i = 0;i< k;i++){
            given[i%n] = given[i%n]^given[n - (i%n) - 1];
        }
        for(lli i : given){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

// #include<bits/stdc++.h>
// using namespace std;
// #define lli long long int
// main(){
//     freopen("/mnt/d/cpp/inputf.in", "r", stdin);
//     freopen("/mnt/d/cpp/outputf.in", "w", stdout);
//     ios_base::sync_with_stdio(0);
//     lli t;
//     cin>>t;
//     while(t--){
//         lli n, k;
//         cin>>n>>k;
//         vector<lli> given(n);
//         for(lli i = 0;i<n;i++){
//             cin>>given[i];
//         }
//         // k = min(k, n);
//         for(lli i = 0;i< k;i++){
//             given[i%n] = given[i%n]^given[n - (i%n) - 1];
//         }
//         for(lli i : given){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }