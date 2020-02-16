#include<bits/stdc++.h>
using namespace std;
int kadanes(vector<int> given){
    int max_sum_till_here = INT_MIN;
    int sum_till_here = 0;
    for(int i = 0;i<given.size();i++){
        sum_till_here += given[i];
        if(sum_till_here > max_sum_till_here){
            max_sum_till_here = sum_till_here;
        }
        if(sum_till_here < 0){
            sum_till_here = 0;
        }
    }
    return max_sum_till_here;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> given(n);
    int ones = 0;
    for(int i= 0;i<n;i++){
        cin>>given[i];
        ones += given[i];
    }
    for(int i= 0;i<n;i++){
        given[i] = (given[i] == 0)?1:-1;
    }
    cout<<ones + kadanes(given);
    


    return 0;
}
