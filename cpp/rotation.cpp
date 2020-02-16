#include<bits/stdc++.h>
using namespace std;
void rev(int arr[], int size, int i){
    if(i< size/2){
    swap(arr[i], arr[size-1-i]);
    rev(arr, size, ++i);
    }
}
int main(int argc, char const *argv[])
{
    // cout<<"enter the size "<<endl;
    // int elemen;
    // cin>>elemen;
    // vector<int> a(elemen);
    // for(auto i = 0;i<elemen;i++){
    //     cin>>a[i];
    // }
    // int pos;
    // cin>>pos;
    // vector<int> temp;
    // for(auto i =0;i<pos;i++){
    //     temp.push_back(a[i]);
    // }
    // for(auto i = 0;i<temp.size();i++){
    //     cout<<temp[i]<<" ";
    // }    
    // cout<<endl;
    // for(auto j = 0;j<pos;j++)
    // for(auto i = 0;i<a.size()-1;i++){
    //     a[i] = a[i+1];
    // }
    // int j =0;
    // for(auto i = pos-1;i<a.size();i++){
    //     a[i] = temp[j];
    //     j++;
    // }
    // for(auto i = 0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }


    // int size;
    // cin>>size;
    int arr[] = {1,2,3,4,5, 6,7,8,9};
    // cout<<"enter the pos"<<endl;
    // int pos;
    // cin>>pos;
    // for(auto i = 0;i<pos;i++){
    //     int temp = arr[0];
    //     for(auto j = 0;j<4;j++){
    //         arr[j] = arr[j+1];
    //     }
    //     arr[4] = temp;
    // }
    // for(auto i = 0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    int size = sizeof(arr)/sizeof(arr[0]);
    // for(auto i = 0;i<size/2;i++){
    //     auto temp = arr[i];
    //     arr[i] = arr[size-1-i];
    //     arr[size-1-i] = temp;
    // }
    rev(arr, size, 0);
    for(auto i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
