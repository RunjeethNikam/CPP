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
    vector<lli> given;
    {
        string g;
        cin>>g;
        for(auto i:g){
            given.push_back(i-'0');
        }
    }
    lli count = 0, result = 0;
    for(lli i = given.size()-1;i>= 0;i--){
        if(count!= 0){
            if(count&1){
                given[i] = given[i]^1;
            }
        }
        if(given[i]){
            count++;
            result++;
        }
    }
    cout<<result<<endl;
    return 0;
}
