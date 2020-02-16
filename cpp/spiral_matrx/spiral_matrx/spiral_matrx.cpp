#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n = 3;
	int a[n][n];
	int k = 0;
	//int ending_row = n;
	int l = 0;
	//int ending_col = n;
	while (k < n && l < n)
	{
		/* Print the first row from the remaining rows */
		for (int i = l; i < n; ++i)
		{
			printf("%d ", a[k][i]);
		}
		k++;

		/* Print the last column from the remaining columns */
		for (i = k; i < m; ++i)
		{
			printf("%d ", a[i][n - 1]);
		}
		n--;

		/* Print the last row from the remaining rows */
		if (k < m)
		{
			for (i = n - 1; i >= l; --i)
			{
				printf("%d ", a[m - 1][i]);
			}
			m--;
		}

		/* Print the first column from the remaining columns */
		if (l < n)
		{
			for (i = m - 1; i >= k; --i)
			{
				printf("%d ", a[i][l]);
			}
			l++;
		}

    
}
