#include <iostream>
#include <ctime>
#include "function.h"
using namespace std;

int main()
{
	srand(time(0));
	const int SIZE = 10;
	int arr[SIZE];
	Init(arr, SIZE);
	Print(arr, SIZE);
	int s = 0, p = 1;
	Sum(arr, SIZE, &s, &p);
	cout << "\nSum of elements: " << s << "\n";
	cout << "Product of elements: " << p << "\n\n";

	const int ROW = 5, COLUMN = 4;
	int arr2[ROW][COLUMN];
	Init(arr2, ROW);
	Print(arr2, ROW);
	int even = 0, odd = 0;
	double average = Average(arr2, ROW, &odd, &even);
	cout << "\nAverage of elements: " << average;
	cout << "\nQuantity of even elements: " << even;
	cout << "\nQuantity of odd elements: " << odd;
	cout << endl << endl;

	Init(&arr2[0][0], ROW, COLUMN);
	Print(&arr2[0][0], ROW, COLUMN);
	even = 0;
	odd = 0;
	average = Average(&arr2[0][0], ROW, COLUMN, &odd, &even);
	cout << "\nAverage of elements: " << average;
	cout << "\nQuantity of even elements: " << even;
	cout << "\nQuantity of odd elements: " << odd;
	cout << endl;

	return 0;
}