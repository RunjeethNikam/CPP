#include<bits/stdc++.h>
using namespace std;
#define lli long long int
queue<long long int> res;
void solve(queue<long long int> q){
    if(q.empty()){
        return ;
    }
    else{
        long long int first = q.front();
        q.pop();
        solve(q);
        res.push(first);
    }
    return;
}
queue<long long int> rev(queue<long long int> q)
{
    // add code here.
    solve(q);
    return res;
}
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        queue<lli> q;
        for(lli i = 0;i<n;i++){
            lli x;
            cin>>x;
            q.push(x);
        }
        rev(q);
        while (!res.empty())
        {
            cout<<res.front()<<" ";
            res.pop();
        }
        cout<<endl;
        
    }
    return 0;
}
