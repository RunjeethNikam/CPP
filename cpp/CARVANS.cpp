#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(int argc, char const *argv[])
{
	lli testCases;
	cin>>testCases;
	while(testCases--){
		lli number_of_cars;
		cin>>number_of_cars;
		lli previs_car = numeric_limits<lli>::max();
		lli count = 0;
		for(auto i = 0;i<number_of_cars;i++){
			lli element;
			cin>>element;
			if(element<= previs_car)
			{
				count++;
				previs_car = element;
			}
		}
		std::cout<<count<<endl;
	}
	return 0;
}