#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
lli sum =0;
lli build(lli given[], lli segTree[], lli low, lli high, lli pos)
{
    if (low == high)
    {
        segTree[pos] = given[low];
        return segTree[pos];
    }
    lli mid = low + (high - low) / 2;
    segTree[pos] = __gcd(build(given, segTree, low, mid, 2 * pos + 1), build(given, segTree, mid + 1, high, 2 * pos + 2));
    return segTree[pos];
}
lli query(lli given[], lli segTree[],lli qlow,lli qhigh ,lli low, lli high,lli pos){
    // cout<<low<<" "<<high<<" "<<pos<<endl;
    if(qlow > high or qhigh < low){
        return 0;
    }
    if(qlow <= low and qhigh >= high){
        return segTree[pos];
    }
    lli mid = low + (high - low)/2;
    return __gcd(query(given, segTree, qlow, qhigh, low, mid, 2*pos + 1), query(given, segTree, qlow, qhigh, mid+1, high, 2*pos +2));

}
int main(int argc, char const *argv[])
{
    lli N, M;
    cin >> N >> M;
    lli given[N];
    lli segTree[4 * N + 1] = {0};
    for (int i = 0; i < N; i++)
    {
        cin >> given[i];
    }
    build(given, segTree, 0, N - 1, 0);
    for(lli i = 0;i<M;i++){
        lli low, high;
        cin>>low>>high;
        low--;
        high--;
        lli sum = 0;
        for(int j = low;j<= high;j++){
            for(int k = j;k<= high;k++){
                sum += query(given, segTree, j, k, 0, N-1, 0);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
