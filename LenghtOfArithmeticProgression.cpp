
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     freopen("/home/home/cpp/inputf.in", "r", stdin);
//     freopen("/home/home/cpp/outputf.in", "w", stdout);
//     ios_base::sync_with_stdio(0);    
//     int N, Q;
//     cin >> N >> Q;
//     int arr[N];
//     for (int i = 0; i < N; i++)
//     {
//         cin >> arr[i];
//     }
//     int value[N - 1];
//     //v[0]=0;
//     for (int i = 0; i < N - 1; i++)
//     {
//         value[i] = arr[i + 1] - arr[i];
//     }

//     map<int, vector<pair<int, int>>> m;
//     int start = 0;
//     int c = 1;
//     // for (int i = 0; i < N - 1; i++)
//     //     cout << value[i] << " ";
//     // cout << endl;
//     for (int i = 0; i < N - 1; i++)
//     {
//         if (value[i] == value[i + 1])
//         {
//             // cout << arr[i] << "*";
//         }
//         else
//         {
//             // cout << "&&&&";
//             // cout << value[i] << " " << value[i + 1] << endl;
//             int end = i + 1;
//             m[value[i]].push_back(make_pair(start, end));
//             start = i + 1;
//         }
//     }
//     m[value[N - 2]].push_back(make_pair(start, N - 1));
//     // for (auto i = m.begin(); i != m.end(); i++)
//     // {
//     //     // cout << i->first << endl;
//     //     // for (auto it2 = i->second.begin(); it2 != i->second.end(); ++it2)
//     //     //     cout << (*it2).first << " " << (*it2).second << endl;
//     //     cout << endl;
//     // }
//     int left, right, D;
//     c = 1;
//     for (int q = 0; q < Q; q++)
//     {
//         // cout << "*********\n";
//         int flag = 0;
//         cin >> left >> right >> D;
//         // cout << "&&&& " << left << " " << right << endl;
//         auto i = m.find(D);
//         left--;
//         right--;
//         if (m.find(D) != m.end())
//         {
//             for (auto it2 = i->second.begin(); it2 != i->second.end(); ++it2)
//             {
//                 if ((*it2).first >= left)
//                 {
//                     if (right < (*it2).second)
//                     {
//                         cout << (right - left) + 1 << endl;
//                         // cout << "if";
//                         flag = 1;
//                         break;
//                     }
//                     else if (right >= (*it2).second)
//                     {
//                         cout << ((*it2).second - (*it2).first) + 1 << endl;
//                         // cout << "else if" << endl;
//                         flag = 1;
//                         break;
//                     }
//                 }
//             }
//         }
//         if (flag != 0)
//             cout << 1 << endl;
//     }
// }




#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli n, q;
    cin>>n>>q;
    vector<lli> given(n+1);
    for(lli i = 1;i<= n;i++){
        cin>>given[i];
    }
    map<int, vector<pair<lli, lli>>> mp;
    lli j = 1;
    vector<int> g1;
    for(lli i = 2;i<= n;i++){
        lli dif = given[i] - given[i-1];
        if(mp[dif].size() != 0){
            if(dif == g1.back()){
                mp[dif].back().second = i;
            }
            else{
                j = i-1;
                mp[dif].push_back({j, i});
                g1.push_back(dif);
            }
        }
        else{
            j = i-1;
            mp[dif].push_back({j, i});
            g1.push_back(dif);
        }
    }
    while(q--){
        lli l, r, D;
        cin>>l>>r>>D;
        if(mp[D].size()){
            vector<pair<lli, lli>> g2 = mp[D];
            lli mx = -1;
            for(auto &i : g2){
                if(l < i.first and r > i.second){
                    mx = max(mx, i.second - i.first + 1);
                }
                else if(l>= i.first and r <= i.second){
                    mx = max(mx, r-l + 1);
                }
                else if(i.first <= l and l < i.second){
                    mx = max(mx, i.second - l + 1);
                }
                else if(i.first < r and r <= i.second){
                    mx = max(mx, r- i.first + 1);
                }
            }
            if(mx == -1){
                cout<<(1)<<endl;
            }
            else{
                cout<<mx<<endl;
            }

        }else{
            cout<<1<<endl;
        }
    }
    

    return 0;
}
