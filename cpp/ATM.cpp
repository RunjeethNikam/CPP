#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int a;
	float  b;
	cin>>a>>b;
	if(a%5 == 0 && (a + 0.5) <= b){
		b -= a;
		b -= 0.5;
	}
	else;
	printf("%0.2f", b);
	return 0;
}