#include <bits/stdc++.h>
using namespace std;
int digit(int sub){
	int count = 0;
	if(sub == 0)
	    return 1;
	while(sub != 0)
	    sub /= 10, count++;
	return count;
}
int main(int argc, char const *argv[])
{
	int A, B;
	cin>>A>>B;
	int sub = A-B;
	int nsub = digit(sub);
	if(nsub == digit(sub + 1)){
		sub += 1;
		if(sub %10 == 0)
			cout<<sub-2;
		else
			cout<<sub;
	}
	else 
		cout<<sub - 1;
	return 0;
}