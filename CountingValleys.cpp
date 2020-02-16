#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    int steps;
    cin>>steps;
    vector<char> given(steps);
    for(int i = 0;i<steps;i++){
        cin>>given[i];
    }
    stack<int> st;
    int count = 0;
    int sealevel = 0;
    for(int i = 0;i<steps;i++){
        if(sealevel == 0 and given[i] == 'D'){
            count++;
        }
        if(given[i] == 'U'){
            sealevel += 1;
        }
        if(given[i] == 'D'){
            sealevel += -1;
        }
    }
    cout<<count;
    return 0;
}
