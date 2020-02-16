#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    lli t;
    map<lli, vector<char>> mp;
    cin >> t;
    // auto cmp = [](pair<lli, char> a, pair<lli, char> b) {
    //     if (a.first < b.first)
    //         return true;
    //     if (a.first == b.first)
    //         return a.second < b.second;
    //     return false;
    // };
    // set<pair<lli, char>, decltype(cmp)> s(cmp);
    while (t--)
    {
        lli n;
        cin >> n;
        while (n--)
        {
            lli x, y;
            cin >> x >> y;
            mp[x].push_back('s');
            mp[y].push_back('e');
        }
        lli count = 0;
        lli result = 0;
        for(auto i = mp.begin();i!= mp.end();i++){
            for(auto j : i->second){
                if(j == 's'){
                    count++;
                }
                else{
                    count--;
                }
            }
            result = max(result, count);
        }
        cout<<result<<endl;
        mp.clear();
    }
    return 0;
}
