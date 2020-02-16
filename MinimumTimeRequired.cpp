#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli size, goal;
    cin>>size>>goal;
    vector<lli> machines(size);
    for(lli i = 0;i<size;i++){
        cin>>machines[i];
    }
    lli left = 1, right = *max_element(machines.begin(), machines.end()) * goal;
    while(right - left >1){
        lli mid = left + (right-left)/2;
        lli produced = 0;
        for(auto it : machines){
            produced += mid/it;
        }
        if(produced >= goal){
            right = mid;
        }
        else{
            left = mid;
        }
    }
    lli produced = 0;
    for(auto it :machines){
        produced += left / it;
    }
    if(produced == goal){
        cout<<left;
    }
    else{
        cout<<right;
    }
    return 0;
}
