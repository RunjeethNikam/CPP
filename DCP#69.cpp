#include<bits/stdc++.h>
using namespace std;
int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN, min1 = INT_MAX, min2 = INT_MAX;
void solve(int x){
    if(x > max1){
        swap(max3, max2);
        swap(max2, max1);
        max1 = x;
    }
    else if (x > max2){
        swap(max2, max3);
        max2 = x;
    }
    else if(x > max3){
        max3 = x;
    }

    if(x < min1){
        swap(min1, min2);
        min1 = x;
    }
    else if(x < min2){
        min2 = x;
    }

}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        for(int i = 0;i<size;i++){
            int x;
            cin>>x;
            solve(x);
        }
        cout<<max(max1*max2*max3, min1*min2*max1)<<endl;
        max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN, min1 = INT_MAX, min2 = INT_MAX;
    }
    return 0;
}
