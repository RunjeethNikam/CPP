#include<iostream>
#include<map>
#include<vector>
#define lli long long int
using namespace std;
int main(int argc, char const *argv[])
{
    lli t;
    cin>>t;
    while(t--){
        lli size, sm;
        cin>>size>>sm;
        vector<lli> given(size);
        for(int i = 0;i<size;i++){
            cin>>given[i];
        }
        int sum = 0;
        vector<lli> preSum(size+1);
        preSum[0] = 0;
        for(int i = 0;i<size;i++){
            sum += given[i];
            preSum[i+1] = sum;
        }
        map<lli, lli> mp;
        for(auto i = 1;i<preSum.size();i++){
            if(preSum[i] >= sm){
                if(preSum[i] == sm){
                    cout<<"0"<<" "<<i;
                    break;
                }
                if(mp.find(preSum[i] - sm) != mp.end()){
                    cout<<(mp.find(preSum[i]- sm))->second<< " " <<i;
                    break;
                }
                if(mp.find(preSum[i]) != mp.end())
                mp[preSum[i]] = i; 
            }
        }
    }
    return 0;
}
