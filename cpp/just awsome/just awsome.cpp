#include<iostream>
#include<string>
#include<stack>
using namespace std;

#define lli long long int
int value(char ch) {
	if (ch == 'H')
		return 1;
	else if (ch == 'C')
		return 12;
	else if (ch == 'O')
		return 16;
	else if (ch == '(')
		return 2;
	else if (ch == ')')
		return 3;
	else
		return -1;
}


int main(int argc, char const* argv[])
{
	string given;
	cin >> given;
	stack<int> s1, s2;
	for (lli i = given.length() - 1; i >= 0; i--) {
		if (isdigit(given[i])) {
			if (isalpha(given[i - 1])) {
				s1.push(value(given[i - 1]) * stoi(&given[i]));
				i--;
			}
			else {
				s2.push(given[i]);
			}
		}
		else {
			s1.push(value(given[i]));
		}
	}

	lli multipler = 1;
	lli sum = 0;
	cout << "s1 contents";

	while (!s1.empty()) {
		cout << " " << s1.top() << " ";
		s1.pop();
	}

	cout << "s2 contents";

	while (!s2.empty()) {
		cout << " " << s2.top() << " ";
		s2.pop();
	}



	// while(!s1.empty()){
	// 	if(s1.top() == 2){
	// 		s1.pop();
	// 		multipler *= s2.top();
	// 	}
	// 	else if(s1.top() == 3){
	// 		s1.pop();
	// 		multipler /= s2.top();
	// 		s2.pop();
	// 	}
	// 	else{
	// 		sum += s1.top()*multipler;
	// 		s1.pop();
	// 	}
	// }
	// cout<<sum<<endl;
	// return 0;
}