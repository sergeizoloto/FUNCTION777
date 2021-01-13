
#include"Function.h"


#define delimiter "\n-------------------------------\n"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Cумма элементов массива ; " << Sum(arr,n) << endl;
	cout << "Среднее арифметическое : " << Avg(arr, n) << endl;
	cout << delimiter << endl;

	//////////////////////////////////////////////
	// ВЫЗЗОВ ФУНКЦИИ 

	int brr[n];
	FillRand(brr, n);
	Print(brr, n);
	Sort(brr, n);
	Print(brr, n);
	cout << delimiter << endl;

	/////////////////////////////////////////////


	/*const int m = 8;
	int crr[m];
	FillRand(crr, m);
	Print(crr, m);
	Sort(crr, m);
	Print(crr, m);
	cout << delimiter << endl;*/


	int i_arr2[ROWS][COLS]; // венгерская нотация 
	FillRand(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);

}

// функции пишем РЕАЛИЗАЦИЯ 

	
	







	




