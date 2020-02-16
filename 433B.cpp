// #include<bits/stdc++.h>
// using namespace std;
// const int maxn = 100010;
// int n, m;
// long long y[maxn], z[maxn];
// int main(int argc, char const *argv[])
// {
//     cin>>n;
//     for(int i = 1;i<=n;i++){
//         cin>>y[i];
//         z[i] = y[i];
//     }
//     sort(y+1, y+n+1);
//     for(int i = 1;i<=n;i++){
//         z[i] += z[i-1], y[i] += y[i-1];
//     }
//     cin>>m;
//     for(int i = 1;i<=m;i++){
//         int opt, l, r;
//         cin>>opt>>l>>r;
//         if(opt == 1)cout<<(z[r] - z[l-1])<<endl;
//         else cout<<(y[r]-y[l-1])<<endl;
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
#define uint64_t long long int
int main(int argc, char const *argv[])
{
    uint64_t n;
    cin>>n;
    vector<uint64_t> given(n+1), given1(n+1);
    for(uint64_t i = 1;i<=n;i++){
        cin>>given[i];
        given1[i] = given[i];
    }
    sort(given1.begin(), given1.end());
    uint64_t q;
    cin>>q;
    while (q--)
    {
        uint64_t t;
        cin>>t;
        if(t == 1){
            uint64_t left, right;
            cin>>left>>right;
            uint64_t sm = accumulate(given.begin() + left, given.begin() + right + 1 , 0ll);
            cout<<sm<<endl;
        }
        if(t == 2){
            uint64_t left, right;
            cin>>left>>right;
            uint64_t sm = accumulate(given1.begin() + left, given1.begin() + right + 1 , 0ll);
            cout<<sm<<endl;
        }
    }
    
    return 0;
}