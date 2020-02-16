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
    string text, pattern;
    getline(cin, text);
    cin>>pattern;
    for(lli i = 0;i<(text.size()-pattern.size())+1;i++){
        if(text[i] == pattern[0]){
            bool flag = true;
            for(lli j = 0;j<pattern.size();j++){
                if(text[i+j] != pattern[j]){
                    flag = false;
                }
            }
            if(flag){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}
