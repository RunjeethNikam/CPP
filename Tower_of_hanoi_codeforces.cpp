#include<bits/stdc++.h>
using namespace std;
int t[4][4];
long long int sum = 0;
void towerofHanoi(int n, int source, int auxillary, int destination){
    if(n>0){
        towerofHanoi(n-1, source ,destination , auxillary);
        cout<<" moving from "<<source<<" to "<<destination<<endl;
        sum += t[source][destination];
        towerofHanoi(n-1, auxillary, source , destination);
    }
}
int main(int argc, char const *argv[])
{
    // int n = 4;
    for(int i =1;i<=3;i++){
        for(int j= 1;j<=3;j++){
            cin>>t[i][j];
        }
    }
    int n;
    cin>>n;
    towerofHanoi(n, 1, 2, 3);
    cout<<sum<<endl;
    return 0;
}
