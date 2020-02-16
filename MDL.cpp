#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli t;
    cin>>t;
    while(t--){
        list<lli> lt;
        lli n;
        cin>>n;
        for(lli i = 0;i<n;i++){
            lli x;
            cin>>x;
            lt.push_back(x);
        }
        while(lt.size() >= 3){
            auto it1 = lt.begin();
            auto it2 = ++lt.begin();
            auto it3 = ++(++lt.begin());
            if(*it2 > *it1 and *it2 < *it3 or (*it2 > *it3 and *it2 < *it1)){
                lt.erase(it2);
            }
            if(*it1 > *it2 and *it1 < *it3 or (*it1 > *it3 and *it1 < *it2)){
                lt.erase(it1);
            }
            if(*it3 > *it1 and *it3 < *it2 or (*it3 > *it2 and *it3 < *it1)){
                lt.erase(it3);
            }
        }
        cout<<*lt.begin() << *(++lt.begin())<<endl;
    }
    return 0;
}
