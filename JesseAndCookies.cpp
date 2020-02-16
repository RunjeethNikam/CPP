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
    lli n, k;
    cin>>n>>k;
    priority_queue<lli, vector<lli>, greater<lli>> q;
    for(lli i = 0;i<n;i++){
        lli x;cin>>x;
        q.push(x);
    }
    lli count = 0;
    while(q.size()>1 && q.top() < k){
        lli last = q.top();q.pop();
        lli last2 = q.top();q.pop();
        q.push(last + 2*last2);
        count++;
    }
    if(q.top() < k){
        cout<<-1;
    }
    else{
        cout<<count;
    }
    return 0;
}
