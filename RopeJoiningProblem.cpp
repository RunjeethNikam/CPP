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
    lli n;
    cin>>n;
    priority_queue<lli, vector<lli>, greater<lli>> q;
    for(lli i= 0;i<n;i++){
        lli x;
        cin>>x;
        q.push(x);
    }
    lli sum = 0;
    while(q.size() != 1){
        lli a = q.top();q.pop();
        lli b = q.top();q.pop();
        sum += a+b;
        q.push(a+b);
    }
    cout<<sum<<endl;
    return 0;
}
