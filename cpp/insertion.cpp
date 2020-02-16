#include<bits/stdc++.h>
using namespace std;
int solve(int* arr , int size, int pos, int it){
    if(it == size)
    return false;
    if(*(arr + it) == pos){
        return true;
    }
    else{
        return solve(arr, size, pos, it+1);
    }
    return false;
}
int main(int argc, char const *argv[])
{
    // cout<<"enter the size1";
    // int size;
    // cin>>size;
    // vector<int> given(size+1);
    // for(auto i = 0;i<size;i++){
    //     int element;
    //     cin>>element;
    //     given.push_back(element);
    // }
    // cout<<"enter the pos"<<endl;
    // int pos;
    // cin>>pos;
    // for(int i = size;i>pos;i--)
    //     given[i] = given[i-1];
    
    // for(auto i = 0;i<given.size();i++){
    //     cout<<given[i]<<" ";
    // }

    int arr[100];
    int size;
    cin>>size;
    for(auto i = 0;i<size;i++)
    cin>>arr[i];
    cout<<" pos "<<endl;
    int pos;
    cin>>pos;
    // for(auto i = pos;i<size-1;i++)
    //     arr[i] = arr[i+1];
    // size--;
    // for(auto i = 0;i<size;i++)
    //     cout<<arr[i]<<" ";
    int p= solve(arr, size, pos , 0);
    cout<<" p "<<p;
    return 0;
}
