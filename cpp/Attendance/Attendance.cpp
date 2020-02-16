#include <iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
	int testcases;
	cin >> testcases;
	while (testcases--) {
		int number_of_students;
		cin >> number_of_students;
		vector<vector<string>> student(number_of_students, vector<string>(2));
		for (int i = 0; i < number_of_students; i++) {
			cin >> student[i][0] >> student[i][1];
		}
		for (int i = 0; i < number_of_students; i++) {
			bool flag = true;
			for (int j = 0; j < number_of_students; j++) {
				if(j != i)
					if (student[i][0] == student[j][0]) {
						cout << student[i][0] << " " << student[i][1]<<endl;
						flag = false;
						break;
					}
			}
			if (flag)
				cout << student[i][0]<<endl;
		}
	}
}