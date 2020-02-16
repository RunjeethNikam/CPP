#include<bits/stdc++.h>
using namespace std;
#define lli long long int
vector<string> dp;
void dfs(){
    queue<string> q;
    q.push("9");
    for(lli i = 0;i<1000;i++){
        string s = q.front();
        q.pop();
        dp.push_back(s);
        q.push(s + "0");
        q.push(s+"9");
    }
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    dfs();
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        bool flag = true;
        for(lli i = 0;i<dp.size();i++){
            if(stoll(dp[i])%n == 0){
                cout<<dp[i]<<endl;
                flag = false;
                break;
            }
        }
        if(flag)
        cout<<"hi "<<n<<endl;
    }
    return 0;
}
