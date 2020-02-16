#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(int argc, char const *argv[])
{
    vector<int> given = {1,2,3};
    // swap(given[1], given[2]);
    for(auto &i : given){
        i= i+5;
    }
    for(auto i: given){
        cout<<i<<" ";
    }
    return 0;
}
