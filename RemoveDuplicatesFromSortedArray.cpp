#include <bits/stdc++.h>
using namespace std;
#define lli long long int
class Solution
{
public:
    int removeDuplicates(vector<int> &A)
    {
        int last = A[0];
        int j = 1;
        for(int i = 2;i<A.size();i++){
            if(A[i] != A[i-1]){
                A[++j] = A[i];
            }
            else{
                if(A[i] != last){
                    A[++j] = A[i];
                    last = A[i];
                }
            }
        }
        while(A.size() != (j+1)){
            A.pop_back();
        }
        return A.size();
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
    // int x;
    // cin >> x;
    Solution s;
    auto hi = s.removeDuplicates(given);
    cout<<hi;
    return 0;
}
