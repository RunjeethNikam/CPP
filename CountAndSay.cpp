#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    lli n;
    cin>>n;
    list<int> lt;
    lt.push_back(1);
    lt.push_back(1);
    for(lli i = 3;i<=n;i++){
        int lastElement = *lt.begin();
        list<int>::iterator lastit = lt.begin();
        int count = 1;
        for(auto it = ++lt.begin();it!=lt.end();it++){
            if(lastElement != *it){
                lt.insert(lastit, count);lt.insert(lastit,lastElement);
                lt.erase(lastit, it);
                lastElement = *it;
                count = 1;
                lastit = it;
            }
            else{
                count++;
            }
        }
        lt.erase(lastit, lt.end());
        lt.push_back(count);
        lt.push_back(lastElement);
    }
    for(auto i : lt){
        cout<<i<<" ";
    }
    return 0;
}
