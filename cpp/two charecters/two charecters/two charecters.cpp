#include "pch.h"
#include<string>
#include<iostream>
#include<assert.h>
using namespace std;

int make_string(string str, char a, char b)
{
	int len = str.size();
	string temp = "";
	char last;

	for (int i = 0; i < len; i++)
	{
		if (str[i] == a || str[i] == b)
			temp += str[i];
	}

	len = temp.size();
	if (len <= 1)
		return 0;

	last = temp[0];
	for (int i = 1; i < len; i++)
	{
		if (temp[i] == last)
			return 0;
		last = temp[i];
	}
	return len;
}

int main() {
	string s; char a, b;
	cin >> s;
	cin >> a >> b;

	cout << make_string(s, a, b);
	return 0;
}