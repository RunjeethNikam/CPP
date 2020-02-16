#include <bits/stdc++.h>
using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     map<int, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         mp[x]++;
//     }
//     // int size = mp.size();
//     // vector<int> arr[mp.size()];
//     int count = 0;
//     for (int i = 1; i <= n and mp.size() != 0; i++)
//     {
//         auto it = mp.lower_bound(i);
//         // cout<<mp.size()<<endl;
//         if(it == mp.end()){
//             // cout<<count<<endl;
//             break;
//         }
//         it->second--;
//         if(it->second == 0){
//             mp.erase(it);
//         }
//         count++;
//     }
//     cout<<count<<endl;
// return 0;
// }


int n, i, r, a[222000];
int main(){
    for(cin>>n;i<n;i++)
    cin>>a[i];
    sort(a, a+n);
    for(i = 0;i<n;i++){
        r += r<a[i];
    }
    cout<<r<<endl;
}