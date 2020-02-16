#include<bits/stdc++.h>
using namespace std;
#define lli long long int
void Kmax(vector<lli> given, lli k){
    deque<lli> Qi(k);
    lli i;
    for(i = 0;i<k;i++){
        while(!Qi.empty() && given[i] >= given[Qi.back()]){
            Qi.pop_back();
        }
        Qi.push_back(i);
    }
    for(; i<given.size();i++){
        cout<<given[Qi.front()]<<" ";
        while(!Qi.empty() && Qi.front() <= i-k)
        Qi.pop_front();
        while(!Qi.empty() && given[i] >= given[Qi.back()])
        Qi.pop_back();
        Qi.push_back(i);
    }
    cout<<given[Qi.front()];
}

int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        lli n, k;
        cin>>n>>k;
        vector<lli> given(n);
        for(auto &i : given){
            cin>>i;
        }
        Kmax(given, k);
    }
    return 0;
}
