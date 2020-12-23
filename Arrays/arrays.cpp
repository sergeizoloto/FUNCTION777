#include<iostream>
using namespace std;

const int ROWS = 8;
const int COLS = 7;

// ПРОТОТИПЫ 
void FillRand(int arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int m, const int n);

void Print(int arr[], const int n);

void Print(int arr[ROWS][COLS], const int m, const int n);

void Sort(int arr[], const int n);

int Sum(int arr [], const int n);
double Sum (double arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);


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
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(int arr[ROWS][COLS], const int m, const int n)// двумерный массив// двумерный массив
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
} 


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(int arr[ROWS][COLS], const int m, const int n) // двумерный массив 
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
	cout << endl;
	}
}


void Sort(int arr[], const int n)
{
	//сортировка:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])

			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];


			}
		}
	}
}

int Sum(int arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}


double Sum(double arr[],const int n)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}

double Avg(int arr[], const int n)


	//double Avg = Sum(arr, n) / n /// return (double} Sum
	{
		return (double)Sum(arr,n) / n;
	}
	
	

double Avg(double arr[], const int n)
{
		return Sum(arr,n) / n;
}

	
	
	







	




