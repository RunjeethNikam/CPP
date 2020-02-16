#include "pch.h"
#include <iostream>
#include<String>
#include<algorithm>
#include<vector>

using namespace std;

void search(string pattern, string text) {
	cout << " text " << text << endl;
	cout << " pattern " << pattern << endl;

	int N = text.size();
	int M = pattern.size();
	for (int i = 0; i <= N-M; i++) {
		int j;
		for (j = 0; j < M; j++) {
			cout << " i+j " << i+j << " j " << j << endl;
			if (text[i + j] != pattern[j]) {
				break;
			}
		}
		if (j == M) {
			cout << "pattern found at index";
			cout << " " << i << endl;
		}
	}
}

int main()
{
	string text = "AABAACAADAABAAABAA";
	string pattern = "AABA";
	search(pattern, text);
	return 0;
}