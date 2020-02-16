#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    if(b&1 and a&1){
        return b< a;
    }
    if(b&1 and (a%2 == 0)){
        return true;
    }
    if(a&1 and (b%2 == 0)){
        return false;
    }
    if((b%2 == 0) and (a%2 == 0)){
        return b<a;
    }
    else{
        return false;
    }
}
int main(int argc, char const *argv[])
{
    freopen("/mnt/d/cpp/inputf.in", "r", stdin);
    freopen("/mnt/d/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);
    priority_queue<int , vector<int>, function<bool(int, int)>> hq(cmp);
    hq.push(2);
    hq.push(1);
    hq.push(3);
    hq.push(4);
    hq.push(5);
    while(hq.size() != 0){
        cout<<hq.top()<<" ";
        hq.pop();
    }
    return 0;
}
