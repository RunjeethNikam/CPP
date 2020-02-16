#include<bits/stdc++.h>
using namespace std;
#define lli long long int
class job{
    public:
    lli id, profit, deadLine;
};
bool cmp(job a, job b){
    return a.profit > b.profit;
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli n;
    cin>>n;
    vector<job> given(n);
    for(auto &i : given){
        cin>>i.id>>i.deadLine>>i.profit;
    }
    sort(given.begin(), given.end(), cmp);
    // lli resut[n];
    vector<lli> resut(n);
    vector<bool> slot(n, false);
    for(lli i = 0;i<n;i++){
        for(lli j = min(n, given[i].deadLine)-1; j>= 0;j--){
            if(!slot[j]){
                resut[j] = i;
                slot[j] = true;
                break;
            }
        }
    }
    for(int i =0;i<n;i++){
        if(slot[i])
            cout<<given[resut[i]].id<<" ";
    }
    return 0;
}
