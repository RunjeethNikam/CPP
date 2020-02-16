// #include<bits/stdc++.h>
// using namespace std;
// #define lli long long int
// int main(int argc, char const *argv[])
// {
//     freopen("/mnt/d/cpp/inputf.in", "r", stdin);
//     freopen("/mnt/d/cpp/outputf.in", "w", stdout);
//     ios_base::sync_with_stdio(0);    
//     int n;
//     cin>>n;
//     lli x = n*n + 1;
//     lli f;
//     while ((x%2) == 0)
//     {
//         x = x/2;
//         f = 2;
//     }
//     lli i = 3;
//     for(;i<= sqrt(x);i += 2){
//         while((x%i) == 0){
//             x = x/i;
//             f = i;
//         }
//     }
//     if(x > 2){
//         i = x;
//         f = i;
//     }
//     if(f >= 2*n){
//         cout<<"stormer";
//     }
//     else{
//         cout<<"not stormer";
//     }
    
//     return 0;
// }


