#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int threeSumClosest(vector<int> &A, int B)
{
    sort(A.begin(), A.end());
    int result = INT_MAX;
    for(int i = 0;i<A.size()-2;i++){
        int ptr1 = i+1, ptr2 = A.size()-1;
        while (ptr1<ptr2)
        {
            int sum = A[i] + A[ptr1] + A[ptr2];
            if(abs(B-sum) < abs(B - r)){
                result = sum;
            }
            if(sum > x){
                ptr2--;
            }
            else{
                ptr1++;  
            }
        }
    }
    return result
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    int s1;
    cin >> s1;

    vector<int> a(s1);
    for (auto &i : a)
    {
        cin >> i;
    }

    int k;
    cin >> k;
    cout << threeSumClosest(a, k) << endl;
    return 0;
}
