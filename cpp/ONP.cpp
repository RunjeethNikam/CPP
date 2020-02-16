#include <bits/stdc++.h>
#define lli long long int
using namespace std;



int prec(char c){
	if(c == '^')
		return 5;
	else if(c == '/')
		return 4;
	else if(c == '*')
		return 3;
	else if(c == '-')
		return 2;
	else if(c == '+')
		return 1;
	else
		return -1;
}


int main(int argc, char const *argv[])
{
	lli testCases;
	cin>>testCases;
	while(testCases--){
		string given;
		cin>>given;
		string out = "";
		stack<char> stack;
		for(auto i = 0;i<given.length();i++){
			if(given[i] >= 'a' && given[i] <= 'z'){
				out = out + given[i];
			}
			else if( given[i] == '('){
				stack.push(given[i]);
			}
			else if(given[i] == ')'){
				while(!stack.empty() && stack.top() != '('){
					out = out + stack.top();
					stack.pop();
				}
				stack.pop();
			}
			else{
				while(!stack.empty() and (prec(stack.top()) > prec(given[i])) and stack.top() != '('){
					if(stack.top() != '(')
					out +=stack.top();
					stack.pop();
				}
				stack.push(given[i]);
			}
		}
		while(!stack.empty()){
			if(stack.top() != '(')
			out += stack.top();
			stack.pop();
		}
		cout<<out<<endl;
	}
	return 0;
}