#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    int size1, size2, size3;
    cin>>size1>>size2>>size3;
    int sum1 = 0,sum2 = 0,sum3 = 0;
    vector<int> st1(size1), st2(size2), st3(size3);
    for(int i = 0;i<size1;i++){
        cin>>st1[i];
        sum1 += st1[i];
    }
    for(int i = 0;i<size2;i++){
        cin>>st2[i];
        sum2 += st2[i];
    }
    for(int i = 0;i<size3;i++){
        cin>>st3[i];
        sum3 += st3[i];
    }
    int i = 0, j = 0, k = 0;
    while(sum1 != sum2 or sum1!=sum3 or sum2 != sum3 and (i<size1 and j<size2 and k < size3)){
        if(sum1 >= sum2 and sum1 >= sum3){
            sum1 -= st1[i];
            i++;
        }
        else if(sum2 >= sum1 and sum2 >= sum3){
            sum2 -= st2[j];
            j++;
        }
        else if(sum3 >= sum1 and sum3 >= sum2){
            sum3 -= st3[k];
            k++;
        }
    }
    cout<<sum1<<endl;
    return 0;
}
