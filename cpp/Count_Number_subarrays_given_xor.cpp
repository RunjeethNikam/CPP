#include <bits/stdc++.h>
#define lli long long int
using namespace std;
void print(vector<vector<lli>> given){
    for(auto i : given){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    lli test;
    cin >> test;
    while (test--)
    {
        lli size;
        cin >> size;
        vector<lli> given(size);
        vector<lli> xorArr(given.size());
        for (auto i = 0; i < size; i++){
            cin >> given[i];
            if(i == 0){
                xorArr[i] = given[i];
            }
            else{
                xorArr[i] = given[i] ^ xorArr[i - 1];
            }
        }
        lli m = 0, ans = 0;
        unordered_map<lli, vector<vector<lli>>> mp;
        for (int i = 0; i < xorArr.size(); i++)
        {
            lli tmp = m ^ xorArr[i];
            auto it = mp.find(tmp);
            if (it != mp.end())
            {
                it->second[0].push_back(i);
                it->second[1].push_back(it->second[1][it->second.size()-1] + i);
            }
            else{
                mp[xorArr[i]][0].push_back(vector<lli> (i));
                mp[xorArr[i]][1].
            }
        }
        for(auto it = mp.begin();it!= mp.end();it++){
            cout<<it->first<<" : ";
            print(it->second);
            cout<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}
