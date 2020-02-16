#include<bits/stdc++.h>
using namespace std;
#define lli long long int
void solve(string given){
    string result = "";
    char last = given.front();int count = 1;
    for(int i = 1;i<given.size();i++){
        if(given[i] == last){
            count++;
        }
        else{
            result += string(1, last) + to_string(count);
            last = given[i];
            count = 1;
        }
    }
    result += string(1, last) + to_string(count);
    cout<<result<<endl;
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    int t;
    cin>>t;
    while(t--){
        string given;
        cin>>given;
        solve(given);
    }
    return 0;
}
