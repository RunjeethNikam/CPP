#include <bits/stdc++.h>
using namespace std;
#define lli long long int
class Solution
{
public:
    vector<int> maxone(vector<int> &A, int B)
    {
        queue<int> q;
        int count = 0;
        int result = INT_MIN, ii, jj;
        for(int i = 0;i<A.size();i++){
            q.push(i);
            (A[i])?:count++;
            if(count > B){
                while(count != B){
                    if(!A[q.front()]){
                        count--;
                    }
                    q.pop();
                }
            }
            // int back = q.back(), front = q.front();
            if(q.size())
            if(result < (q.back() - q.front() +1)){
                result = q.back() - q.front() + 1, ii = q.front(), jj = q.back();
            }
        }
        vector<int> result1;
        for(ii;ii<= jj;ii++){
            result1.push_back(ii);
        }
        return result1;
    }
};
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    int size;
    cin >> size;
    vector<int> given(size);
    for (auto &i : given)
    {
        cin >> i;
    }
    int x;
    cin>>x;
    Solution s;
    auto hi = s.maxone(given, x);
    for(auto i : hi){
        cout<<i<<" ";
    }
    return 0;
}
