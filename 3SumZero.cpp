#include<bits/stdc++.h>
using namespace std;
#define lli long long int
class Solution{
    public:
        vector<vector<int>> threeSum(vector<int> &A)
        {
            if()
            set<vector<int>> result;
            sort(A.begin(), A.end());
            for(int i = 0;i<A.size()-2;i++){
                int ptr1 = i+1, ptr2 = A.size()-1;
                while(ptr1 < ptr2){
                    int sum = A[i] + A[ptr1] + A[ptr2];
                    if ((A[i] + A[ptr1] + A[ptr2]) == 0)
                    {
                        vector<int> x{A[i], A[ptr1], A[ptr2]};
                        result.insert(x);
                        ptr2--;
                        ptr1++; 
                    }
                    else if(sum > 0){
                        ptr2--;
                    }
                    else{
                        ptr1++;
                    }
                }
            }
            vector<vector<int>> x;
            for(auto i:result){
                x.push_back(i);
            }
            return x;
        }
};
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    int size;cin>>size;
    vector<int> given(size);
    for(auto &i:given){
        cin>>i;
    }
    Solution s;
    auto hi = s.threeSum(given);
    for(auto i: hi){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
