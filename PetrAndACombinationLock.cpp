#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int> given,int pos,int sum){
    if(pos == given.size()){
        if(sum%360 == 0){
            return true;
        }
        return false;
    }
    bool left = solve(given, pos + 1, (sum + given[pos])%360);
    bool right = solve(given, pos + 1, (sum - given[pos])%360);
    return (left or right);
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> given(n);
    for(int i = 0;i<n;i++){
        cin>>given[i];
    }
    cout<<(solve(given, 0, 0)?"yes":"no");
    return 0;
}
