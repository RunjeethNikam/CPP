#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int LCS(string a, string b, int i, int j){
	if(i == 0|| j== 0)
		return 0;
	else{
		if(a[i] == b[j])
				return max({LCS(a, b, i-1, j), LCS(a, b, i, j -1), LCS(a, b, i-1, j - 1) + 1});
		else
				return max(LCS(a, b, i-1, j), LCS(a, b, i, j -1));
	}
	return -1;
}
int main(int argc, char const *argv[])
{
	string a, b;
	cin>>a>>b;
	cout<<LCS(a,b, a.length()-1, b.length()-1);
	return 0;
}