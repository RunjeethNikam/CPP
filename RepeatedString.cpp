#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);freopen("/mnt/d/cpp/outputf.in", "w", stdout);ios_base::sync_with_stdio(0);
    string given;
    cin>>given;
    lli length;
    cin>>length;
    lli a_s = 0;
    for(auto i : given){
        if(i == 'a'){
            a_s++;
        }
    }
    lli count = 0;
    count += (length/given.size()) * a_s;
    for(int i = 0;i<length%given.size();i++){
        if(given[i] == 'a'){
            count++;
        }
    }
    cout<<count;
    return 0;
}

