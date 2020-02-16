#include<bits/stdc++.h>
using namespace std;

void leftshift(int given[], int k,int size){
    // int size = sizeof(given)/sizeof(int);
    // for(int j = 0;j<k;j++){
    //     int first = given[0];
    //     for(int i = 1;i<size;i++){
    //         given[i] = given[i-1];
    //     }
    //     given[size-1] = first;
    // }

    // for(int i = 0;i<size;i++){
    //     cout<<given[i]<<" ";
    // }
    for(int i = 0;i<=k/2;i++){
        int temp = given[i];
        given[i] = given[k-i-1];
        given[k-i-1] = temp;
    }
    int size1 = size - k;
    for(int i = k;i<=size/2;i++){   
        int ii = i-k;
        int temp = given[i];
        given[i] = given[size-i-1 +k];
        given[size-i-1+k] = temp;
    }
    for(int i = 0;i<size/2;i++){
        int temp = given[i];
        given[i] = given[size-i-1];
        given[size-i-1] = temp;
    }
    for(int i = 0;i<size;i++){
        cout<<given[i]<<" ";
    }
}
int main(int argc, char const *argv[])
{
    int N;
    cin>>N;
    int given[N];
    for(int i = 0;i<N;i++){
        cin>>given[i];
    }
    int mn = 1e6 + 1, mx = 0;
    int indexmn = -1;
    int indexmx = -1;
    for(int i = 0;i<N;i++){
        if(given[i] < mn){
            mn = given[i];
            indexmn = i;
        }
        if(given[i] > mx){
            mx = given[i];
            indexmx = i;
        }
    }
    int size = sizeof(given)/sizeof(int);
    if(indexmn < indexmx){
        // right shift
        // cout<<(given[indexmx] - given[indexmn])<<endl;
        leftshift(given,size -  (given[indexmx] - given[indexmn]), size);
    }
    else{
        // left shift;
        leftshift(given, given[indexmx] - given[indexmn], size);
    }
    return 0;
}
