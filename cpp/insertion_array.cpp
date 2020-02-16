#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int size;
	cout<<"enter the size";
	cin>>size;
	int given[size+1];
	cout<<"enter the array";
	for(int i = 0;i<size;i++){
		cin>>given[i];
	}
	int pos, element;
	cout<<"enter the pos and element";
	cin>>pos>>element;
	for(int i = size + 1;i>pos;i--){
		given[i] = given[i-1];
	}
	given[pos] = element;
	for(int i = 0;i<=size;i++){
		cout<<given[i]<<" ";
	}
	return 0;
}