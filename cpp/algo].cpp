#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int fir[] = {5,10,23,32,342,34};
	int sec[]  = {23,34,4,34,2,2,34,2,34};
	vector<int> hi(10);
	sort(fir, fir+6);
	sort(sec, sec+9);
	merge(fir, fir+6, sec, sec+9, hi.begin());
	for(vector<int>::iterator i = hi.begin();i!=hi.end();i++){
		cout<<*i<<endl;
	}
	cout<<min(hi.begin(),hi.end());
	
}
