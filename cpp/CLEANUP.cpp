#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
	int testCases;
	cin>>testCases;
	while(testCases--){
		int n, m;
		cin>>n>>m;
		std::vector<bool> jobs(n+1);
		for(auto i = 1;i<= m;i++){
			int element;
			cin>>element;
			jobs[element] = true;
		}
		bool flag = true;
		for(auto i = 1;i<= n;i++){
			if(jobs[i] == false){
				if(flag == true){
					// chief
					jobs[i] = true;
					cout<<i<<" ";
					flag = false;
				}
				else{
					//assisitent
					flag = true;
				}
			}
		}
		cout<<endl;
		for(auto i = 1;i<= n;i++){
			if(jobs[i] == false){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}

	return 0;
}