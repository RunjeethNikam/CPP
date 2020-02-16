// #include <bits/stdc++.h>
// using namespace std;
// #define lli long long int
// const lli mod = 1000000000;
// int main(int argc, char const *argv[])
// {
//     lli N, Q;
//     cin >> N >> Q;
//     vector<lli> given(N + 1);
//     for (lli i = 1; i <= N; i++)
//     {
//         cin >> given[i];
//     }
//     vector<lli> fib(N + 1);
//     fib[0] = 1;
//     fib[1] = 1;
//     for (lli i = 2; i < fib.size(); i++)
//     {
//         fib[i] = (fib[i - 1]%mod + fib[i - 2]%mod)%mod;
//     }
//     for (lli i = 0; i < Q; i++)
//     {
//         lli ti;
//         cin >> ti;
//         if (ti == 1)
//         {
//             lli xi, vi;
//             cin >> xi >> vi;
//             given[xi] = vi;
//         }
//         else if (ti == 2)
//         {
//             lli li, ri;
//             cin >> li >> ri;
//             lli sum = 0;
//             for (lli x = 0; x <= (ri - li); x++){
//                 sum = (sum%mod + ((fib[x]%mod)*(given[li + x]%mod))%mod)%mod;
//             }
//             cout<<sum%mod<<endl;
//         }
//         else{
//             lli li, ri, di;
//             cin>>li>>ri>>di;
//             for(lli i = li ;i<= ri;i++){
//                 given[i] += di;
//             }
//         }
//     }
//     return 0;
// }




