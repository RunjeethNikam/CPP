#include <bits/stdc++.h>
using namespace std;
#define lli long long int
class Solution
{
public:
    bool check(int i, int ptr1, int ptr2, vector<int> A){
        return ((A[i] + A[ptr1] > A[ptr2]) and (A[ptr1] + A[ptr2] > A[i]) and (A[ptr2] + A[i] > A[ptr1]));
    }
    int nTriang(vector<int> &A)
    {
        int count = 0;
        sort(A.begin(), A.end());
        for(int i = A.size()-1;i>1;i--){
            int ptr1 = 0, ptr2 = i-1;
            while(ptr1 < ptr2){
                if (A[ptr1] + A[ptr2] > A[i])
                {
                    count += ptr2 - ptr1;
                    ptr2--;
                    
                }
                else{
                    ptr1++;
                }

            }
        }
        return count;
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
    auto hi = s.nTriang(given);
    cout << hi;
    return 0;
}
