// https://codeforces.com/contest/1213/problem/A
#include<bits/stdc++.h>
using namespace std;
#define lli long long int  
int main(int argc, char const *argv[])
{
    lli size;
    cin>>size;
    vector<int> chips(size);
    for(int i = 0;i<size;i++){
         cin>>chips[i];
    }
    int count1 = 0, count2 = 0;
    for(int element : chips){
        if(element&1){
            // odd
            count1++;
        }
        else{
            count2++;
        }
    }
    cout<<((count2 < count1)? count2:count1);

    return 0;
}
