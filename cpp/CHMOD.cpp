#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

// template <typename T, typename S> 
// ostream& operator<<(ostream& os, const pair<T, S>& v) 
// { 
//     os << "("; 
//     os << v.first << ", " 
//        << v.second << ")"; 
//     return os; 
// } 



// int main(int argc, char const *argv[])
// {
// 	int N;
// 	cin>>N;
// 	int pocket = int(sqrt(N));
// 	// cout<<"pocket "<<pocket<<endl;
// 	int size_of_array = ceil(N/ (float)pocket);
// 	// cout<<"size_of_array "<<size_of_array<<endl;
// 	std::vector<int> product_array(size_of_array);
// 	std::vector<int> v(N);
// 	for(auto i = 0;i< N;i++ ){
// 		cin>>v[i];
// 	}
// 	lli product = 1;
// 	for(auto i = 0, j = 0, k = 1;i<N;i++, k++){
// 		if(k == pocket || i == (N-1)){
// 			product *= v[i];
// 			product_array[j] = product;
// 			k = 0;
// 			j++;
// 			product = 1;
// 		}
// 		else{
// 			product *= v[i];
// 		}
// 	}

// 	for(auto i = 0;i<size_of_array;i++){
// 		cout<<product_array[i]<<" ";
// 	}

// 	product = 1;

// 	int testCases;
// 	cin>>testCases;
// 	while(testCases--){
// 		long long int result = 1;
// 		int left, right, modulo;
// 		cin>>left>>right>>modulo;
// 		left--;
// 		right--;

// 		lli left_index = left/pocket, right_index = right/pocket;
// 		for(auto i = left_index;i<= right_index;i++){
// 			product = ((product) * (product_array[i]));
// 		}
// 		// for left
// 		left--;
// 		while(left >= 0 && (left/pocket == left_index)){
// 			product = ((product)/(v[left]));
// 			left--;
// 		}
// 		right++;
// 		while(right < N && (right/pocket == right_index)){
// 			product = ((product)/(v[right]));
// 			right++;
// 		}
// 		cout<<product%modulo<<endl;
// 		product = 1;
// 	}
// 	return 0;
// }


int prime[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
int nprime = 25;
int main(int argc, char const *argv[])
{
	std::vector<pair<int, int>> V[102];
	int a;
	int cnt;
	for(int i = 2;i<=100;i++){
		a = i;
		for(int j = 0;j<25;j++){
			cnt = 0;
			while(a % prime[j] == 0)
				cnt++, a /= prime[j];
			if(cnt)
				V[i].push_back(pair<int, int>(j, cnt));
			if(a == 1)
				break;
		}
	}

	for(int i = 0;i<= 100;i++){
		cout<<V[i].size()<<endl;
		for(int j = 0;i<V[i].size();j++){
			cout<<V[i][j].first<<" "<<V[i][j].second<<endl;;
		}
	}
	return 0;
}