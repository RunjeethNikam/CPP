#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
	while(1){
		lli n;
		cin>>n;
		if(n == 0){
			break;
		}
		else{
			std::vector<lli> v(n);
			for(auto i = 0;i<n;i++){
				cin>>v[i];
			}
			lli j = 1, i = 0;
			stack<lli> stack;
			bool flag = true;
			while(j != n && i<n){
				if(v[i] == j){
					j++;
					i++;
				}
				else if(!stack.empty() && (stack.top() == j)){
					stack.pop();
					j++;
				}
				else{
					if(!stack.empty()){
						if(stack.top() > v[i]){
							stack.push(v[i]);
							i++;
						}
						else{
							flag = false;
							break;
						}
					}
					else{
						stack.push(v[i]);
						i++;
					}
				}
			}
			if(flag){
				cout<<"yes";
			}
			else{
				cout<<"no";
			}
		}
		cout<<endl;
	}
	return 0;
}