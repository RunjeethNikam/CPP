#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);freopen("/mnt/d/cpp/outputf.in", "w", stdout);ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    vector<int> given(n+5);
    for(int i = 0;i<n;i++){
        cin>>given[i];
    }
    int count = 0;
    for(int i = 0;i<n;){
        if(given[i+2] != 1 and (i+2) <= (n-1)){
            i += 2;
            count++;
        }
        else if(given[i+1] != 1 and (i+1) <= (n-1)){
            i += 1;
            count++;
        }
        if(i == (n-1)){
            break;
        }
        
    }
    cout<<count;
    return 0;
}
