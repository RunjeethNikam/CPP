#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v2;
	v2.push_back(2);
	v2.push_back(3);
	v2.insert(v2.begin(),25);
	vector<int>::iterator i, it = v2.begin();
	for(it = v2.begin();it!=v2.end();it++){
		cout<<*it<<endl;
	}
	
	vector<int> foo(10,0);
	for(vector<int>::iterator i = foo.begin();i!=foo.end();i++)
	{
		cout<<*i<<endl;
	}
}
