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
    list<int> lt;
    int n;
    cin>>n;
    for(lli i = 0;i<n;i++){
        int x;
        cin>>x;
        lt.push_back(x);
    }
    int k;cin>>k;
    auto it = lt.begin(), last = lt.begin();
    while(k--){
        it++;
    }
    for(;it!= lt.end();it++, last++);
    cout<<*last;

    return 0;
}
