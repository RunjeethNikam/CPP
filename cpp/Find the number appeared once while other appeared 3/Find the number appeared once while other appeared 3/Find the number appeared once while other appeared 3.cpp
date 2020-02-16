#include "pch.h"
#include <iostream>
#include<stdio.h>
using namespace std;

int getSingle(int arr[], int n) {
	int ones = 0, twos = 0;
	int common_bits_mask;
	for (int i = 0; i < n; i++) {
		ones = ones ^ arr[i]; // this will hold the element which occurs once
		twos = twos | (ones & arr[i]);  // this will hold the element which occurs twice
 		cout <<"twos "<< twos;
		cout << "ones " << ones;
		common_bits_mask = ~(ones & twos); // this remove the element common in both ones and twos 
		ones &= common_bits_mask;
		twos &= common_bits_mask;
		cout << endl;
	}
	return ones;
}

int main()
{
	int arr[] = { 3, 3, 2, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("The element with single occurrence is %d ", getSingle(arr, n));
}
