#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    lli sizea, sizeb, sizec;
    cin>>sizea>>sizeb>>sizec;
    vector<lli> A, C, B;
    set<lli> a, b, c;
    for(lli i = 0;i<sizea;i++){
        lli x;
        cin>>x;
        a.insert(x);
    }
    for(lli i = 0;i<sizeb;i++){
        lli x;
        cin>>x;
        b.insert(x);
    }
    for(lli i = 0;i<sizec;i++){
        lli x;
        cin>>x;
        c.insert(x);
    }
    for(auto it = a.begin();it!= a.end();it++){
        A.push_back(*it);
    }
    for(auto it = b.begin();it!= b.end();it++){
        B.push_back(*it);
    }
    for(auto it = c.begin();it!= c.end();it++){
        C.push_back(*it);
    }
    lli result = 0;
    for(auto it = B.begin();it!=B.end();it++){
        lli x = upper_bound(A.begin(), A.end(), *it) - A.begin();
        lli y = upper_bound(C.begin(), C.end(), *it) - C.begin();
        // cout<<"x "<<x<<" y "<<y<<endl;
        result += (x*y);
    }
    cout<<result;
    return 0;
}
