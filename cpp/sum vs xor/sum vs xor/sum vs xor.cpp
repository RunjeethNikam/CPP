#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int x = 4;
	int ans = 0;
	for (int i = 0; i <= x; i++) {
		if ((x + i) == (x^i))
			ans++;
	}
	cout << ans;
}
  