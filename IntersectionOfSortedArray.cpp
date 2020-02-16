#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli s1, s2;
    cin>>s1>>s2;
    vector<int> giv1(s1), giv2(s2);
    for(auto i:giv1){
        cin>>i;
    }
    for(auto i : giv2){
        cin>>i;
    }
    vector<int> result;
    int i = 0, j = 0;
    while(i != s1 and j != s2){
        if(giv1[i] == giv2[j]){
            result.push_back(giv1[i++]);j++;
        }
        else{
            (giv1[i] < giv2[j])?i++:j++;
        }
    }
    for (auto i : result)
    {
        cout<<i<<endl;
    }
    return 0;
}
