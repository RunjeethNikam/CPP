#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli pow(lli base,lli power){
	if(power == 1){
		return (base);
	}
	else{
		lli temp = pow(base, power/2);
		return (temp * temp);
	}
	return -1;
}
int main(int argc, char const *argv[])
{
	lli base,power;
	cin>>base>>power;
	lli result;
	if(power&1){
		// odd
		result = pow(base,power-1) * base;
	}
	else{
		// even
		result = pow(base, power);
	}
	cout<<result;
	return 0;
}
