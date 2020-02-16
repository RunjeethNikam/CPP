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
    list<int> lt, lt1;
    lt.push_back(1);
    lt.push_back(3);
    lt.push_back(5);
    lt.push_back(7);

    lt1.push_back(2);
    lt1.push_back(4);
    lt1.push_back(6);
    lt1.push_back(8);
    lt.merge(lt1);
    lt.swap(lt1);
    for(auto it : lt){
        cout<<it<<" ";
    }
    cout<<endl;
    for (auto it : lt1)
    {
        cout << it << " ";
    }
    cout<<"end";
    return 0;
}
