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
    int arr[2][5] = {{0, 2, 4, 6, 8}, {1, 3, 5, 7, 9}};
    lli r, c;
    cin>>r>>c;
    r--, c--;
    cout<<arr[r%2][c] + (r/2)*10;
    return 0;
}
