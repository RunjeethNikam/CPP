#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int k;
    cin>>k;
    string given1;
    cin>>given1;
    vector<int> given;
    for(auto i : given1){
        if(i == 'x'){
            given.push_back(1);
        }
        else
        {
            given.push_back(-1);
        }
    }
    vector<int> neg;
    int sum = 0;
    for(int i = 0;i<given.size();i++){
        if(given[i] == sum){
            sum = max(sum , sum+1);
        }
        else{
            
        }
    }
    return 0;
}
