#include "pch.h"
#include<algorithm>
#include <iostream>
#include<string>
#include<map>
#include<set>
using namespace std;
//int main()
//{
//	long long int size, count_number, count_lower_case, count_uppercase, special_characters;
//	cin >> size;
//	string password, numbers = "0123456789", lower_case = "abcdefghijklmnopqrstuvwxyz", upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
//	string special_characters1 = "!@#$%^&*()-+";
//	cin >> password;
//	long long int count = 0;
//	if (password.size() >= 6) {
//		for (char element : numbers) {
//			if (password.find(element) != password.npos) {
//				count++;
//				break;
//			}
//		}
//		for (char element : lower_case) {
//			if (password.find(element) != password.npos) {
//				count++;
//				break;
//			}
//		}
//		for (char element : upper_case) {
//			if (password.find(element) != password.npos) {
//				count++;
//				break;
//			}
//		}
//		for (char element : special_characters1) {
//			if (password.find(element) != password.npos) {
//				count++;
//				break;
//			}
//		}
//		cout << 4 - count << endl;
//	}
//	else {
//		long long int x = 6 - password.size();
//		for (char element : numbers) {
//			if (password.find(element) != password.npos) {
//				count++;
//				break;
//			}
//		}
//		for (char element : lower_case) {
//			if (password.find(element) != password.npos) {
//				count++;
//				break;
//			}
//		}
//		for (char element : upper_case) {
//			if (password.find(element) != password.npos) {
//				count++;
//				break;
//			}
//		}
//		for (char element : special_characters1) {
//			if (password.find(element) != password.npos) {
//				count++;
//				break;
//			}
//		}
//		cout << max(x, 4-count);
//	}
//}


//method 2




const int N = 200005;
const string numbers = "0123456789";
const string lower_case = "abcdefghijklmnopqrstuvwxyz";
const string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string special = "!@#$%^&*()-+";

int main() {
	map<char, int> m;
	for (auto c : numbers)
		m[c] = 0;
	for (auto c : lower_case)
		m[c] = 1;
	for (auto c : upper_case)
		m[c] = 2;
	for (auto c : special)
		m[c] = 3;
	set <int> types;
	int n;
	string s;
	cin >> n >> s;
	for (auto c : s) {
		types.insert(m[c]);
	}
	cout << max(6 - n, 4 - (int)types.size());
}