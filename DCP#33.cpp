#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);    
    // vector<int> arr{5, 15, 10, 20, 3};
    int n;
    cin>>n;
    priority_queue<double> maxHeap;
    priority_queue<double, vector<double>, greater<double>> minHeap;
    int x;
    cin>>x;
    double med  = x;
    maxHeap.push(x);
    cout<<med<<endl;
    for(int i = 1;i<n;i++){
        // double x = arr[i];
        cin>>x;
        if(maxHeap.size() > minHeap.size()){
            if(x < med){
                minHeap.push(maxHeap.top());
                maxHeap.pop();
                maxHeap.push(x);
            }
            else{
                minHeap.push(x);
            }
            med = (maxHeap.top() + minHeap.top())/2.0;
        }
        else if(maxHeap.size() == minHeap.size()){
            if(x < med){
                maxHeap.push(x);
                med = maxHeap.top();
            }
            else{
                minHeap.push(x);
                med = minHeap.top();
            }
        }
        else{
            if(x > med){
                maxHeap.push(minHeap.top());
                minHeap.pop();
                minHeap.push(x);
            }
            else{
                maxHeap.push(x);
            }
            med = (maxHeap.top() + minHeap.top())/2.0;
        }
        cout<<med<<endl;
    }
    return 0;
}
