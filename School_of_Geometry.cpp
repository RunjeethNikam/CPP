#include<bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

void solve(vector<lli> given1, vector<lli> given2){
    sort(given1.begin(), given1.end());
    sort(given2.begin(), given2.end());
    lli result = 0;
    for(lli i = 0;i<given1.size();i++){
        result = result + min(given1[i], given2[i]);
    }
    cout<<result<<endl;
}

int main(int argc, char const *argv[])
{
    lli t;
    cin>>t;
    while (t--)
    {
        lli n;
        cin>>n;
        vector<lli> given1(n, 0);
        auto given2 = given1;
        for(lli i = 0;i < given1.size();i++){
            cin>>given1[i];
        }
        for(lli i = 0;i < given1.size();i++){
            cin>>given2[i];
        }
        solve(given1, given2);
    }
    
    return 0;
}
