#include <bits/stdc++.h>
using namespace std;
// ##ifndef lli
#define lli long long int
// #endif
int main()
{
    lli testCases;
    cin>>testCases;
    while(testCases--){
    	lli arr[200],n;
    	cin>>n;
    	for(int j = 1;j<= n;j++)
    		cin>>arr[j];
    	int it1 = 1, it2 =n, number = 1;
    	bool sol = 1;
    	while(number <= 6){
    		if(arr[it1] != number || arr[it2] != number){
    			sol = 0;
    			break;
    		}
    		int r1 = 0, r2 = 0;
    		while(it1 <= n && arr[it1] == number) r1++, it1++;
    		while(it2 > 0 && arr[it2] == number) r2++, it2--;
    		if(r1 != r2){
    			sol = 0;
    			break;
    		}
    		number++;
    	}
    	if(number == 7 && it1 <= it2){
    		for(int j = it1 ;j<=it2;j++){
    			if(arr[j] != 7)
    				sol = 0;
    		}
    	}
    	else 
    		sol = 0;
    	if(sol) 
    		cout<<"yes";
    	else
    		cout<<"no";
    	cout<<endl;
    }
}
