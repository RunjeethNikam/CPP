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
    lli y = INT64_MIN, ny = INT64_MAX, x = INT64_MIN, nx = INT64_MAX;
    lli n;
    cin>>n;
    for(lli i = 0;i<n;i++){
        lli xx, yy;
        cin>>xx>>yy;
        if(yy != 0){
        y = max(yy, y);
        ny = min(yy, ny);
        }
        else{
        x = max(xx, x);
        nx = min(xx, nx);
        }
    }
    vector<pair<lli, lli>> cor;
    if (y != INT64_MIN and x != INT64_MIN){
        pair<lli, lli> A(0, y), B(x, 0), C(0, ny), D(nx, 0);
        cor.push_back(A);
        cor.push_back(B);
        cor.push_back(C);
        cor.push_back(D);
    }
    else if (y != INT64_MIN){
        pair<lli, lli> A(0, y), C(0, ny);
        cor.push_back(A);
        // cor.push_back(B);
        cor.push_back(C);
        // cor.push_back(D);
    }
    else{
        pair<lli, lli> B(x, 0), D(nx, 0);
        // cor.push_back(A);
        cor.push_back(B);
        // cor.push_back(C);
        cor.push_back(D);
    }
    double res = 0;
    for(lli i = 0;i<cor.size();i++){
        for(lli j = 0;j<cor.size();j++){
            res = max(res, (double)hypot(cor[i].first - cor[j].first, cor[i].second - cor[j].second));
        }
    }
    cout<<fixed<<setprecision(6)<<res<<endl;
    return 0;
}
