#include <iostream>
#include<map>
#include<string>
using namespace std;

map<int, string> replace;


int main()
{
	int h, m;
	cin >> h >> m;
	replace[1] = "one";
	replace[2] = "two";
	replace[3] = "three";
	replace[4] = "four";
	replace[5] = "five";
	replace[6] = "six";
	replace[7] = "seven";
	replace[8] = "eight";
	replace[9] = "nine";
	replace[10] = "ten";
	replace[11] = "eleven";
	replace[12] = "twelve";
	replace[13] = "thirteen";
	replace[14] = "fourteen";
	replace[15] = "fifteen";
	replace[16] = "sixteen";
	replace[17] = "seventeen";
	replace[18] = "eighteen";
	replace[19] = "nineteen";
	replace[20] = "twenty";



	replace[21] = "twenty one";
	replace[22] = "twenty two";
	replace[23] = "twenty three";
	replace[24] = "twenty four";
	replace[25] = "twenty five";
	replace[26] = "twenty six";
	replace[27] = "twenty seven";
	replace[28] = "twenty eight";
	replace[29] = "twenty nine";
	replace[30] = "thirty";
	replace[31] = "thirty one";
	replace[32] = "thirty two";
	replace[33] = "thirty three";
	replace[34] = "thirty four";
	replace[35] = "thirty five";
	replace[36] = "thirty six";
	replace[37] = "thirty seven";
	replace[38] = "thirty eight";
	replace[39] = "thirty nine";
	replace[40] = "forty";


	replace[41] = "forty one";
	replace[42] = "forty two";
	replace[43] = "forty three";
	replace[44] = "forty four";
	replace[45] = "forty five";
	replace[46] = "forty six";
	replace[47] = "forty seven";
	replace[48] = "forty eight";
	replace[49] = "forty nine";
	replace[50] = "fifty";
	replace[51] = "fifty one";
	replace[52] = "fifty two";
	replace[53] = "fifty three";
	replace[54] = "fifty four";
	replace[55] = "fifty five";
	replace[56] = "fifty six";
	replace[57] = "fifty seven";
	replace[58] = "fifty eight";
	replace[59] = "fifty nine";
	//replace[40] = "forty";


	if (m == 0) {
		cout << replace[h] << " o' clock";
	}
	else if (m <= 30 && m >= 1) {
		if (m == 30)
			cout << "half past " << replace[h];
		else if (m == 15)
			cout << "quarter past " << replace[h];
		else
			cout << replace[m] << " minutes past " << replace[h];
	}
	else {
		if (m == 45)
			cout << "quarter to " << replace[h + 1];
		else {
			int remaining = 60 - m;
			cout << replace[remaining] << " minutes to " << replace[h + 1];
		}
	}
}