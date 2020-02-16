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
//     lli capacity = 12;
//     lli residue = 0;
//     lli count = 0;
//     while(cin>>n){
//         // cout<<n;
//         if(n > capacity){
//             break;
//         }
//         if(n <= residue){
//             residue -= n;
//         }
//         else{
//             count++;
//             residue = capacity - n;
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int strat2(int a[], int n, int capacity){
    int b[n], res = 0;
    for(int i = 0;i<n;i++){
        b[i] = capacity;
    }
    for(int i = 0;i<n;i++){
        int target = 0;
        for(int j = 0;j<n;j++){
            if(b[j] >= a[i]){
                target = j;
                break;
            }
        }
        if(b[target] == capacity)

    }
}

int strat3(int a[], int n, int capacity){
    int b[n], res = 0;
    for(int i = 0;i<n;i++)
        b[i] = capacity;
    for(int i= 0;i<n;i++){
        int MIN = capacity + 100, target = 0;
        for(int j = 0;j<n;j++){
            if(a[i]<= b[j] and b[j] < MIN){
                target = j;
                MIN = b[j];
            }
        }
        if(b[target] == capacity)
        res++;
        b[target] -= a[i];
    }
    return res;
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    
    return 0;
}
