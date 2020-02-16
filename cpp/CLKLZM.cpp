#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 1e5 + 5
int N, M, Z[MAX_N]
vector<pair<int, int>> c[MAX_N]
int main(int argc, char const *argv[])
{
    int T;
    cin>>T;
    while(T--){
        cin>>N>>M;
        for(int i = 1;i<= N;i++)
            cin>>Z[i];
        for(int i = 0;i<M;i++){
            int L, R, K;
            cin>>L>>R>>K;
            c[L].push_back(make_pair(R,K));
        }
    }
    return 0;
}
