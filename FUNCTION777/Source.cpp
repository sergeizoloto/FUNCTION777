#include<iostream>
using namespace std;


// ������ ����
// Unresolved externals 
// LNK - Linker �����������. �������...
// Unresolved externals symbol.....

// 1. ������ �� ����� ���������� E,C;
// 2. ������ �� ����� ���������� LNK;
// 3. ������ �� ����� ��������� Runtime error;


int add(int a, int b, int c = 0); // �������� ������� (function declaration -��������� �������)
int sub(int a, int b);
int mul(int a, int b);
double my_div(double a, double b);
int power(int a, int n);


void main()
{
	setlocale(LC_ALL, "Russian");

	int num1, num2;
	cout << " ������� ��� ����: "; cin >> num1 >> num2;
	int c = add(num1, num2, 5); // ����� ������� ( function call)
	cout << c << endl;
	cout << sub(num1, num2) << endl;
	cout << mul(num1, num2) << endl;
	cout << my_div(num1, num2) << endl;
	cout << power(num1, num2) << endl;
	cout << add(7, 8) << endl;
}

int add(int a, int b, int c) // �������
{

	int sum = a + b + c;
	return sum;

} // ��������� ������� ( Function definition - ���������� �������)

int sub(int a, int b)
{
	return a - b;

}

int mul(int a, int b)
{
	return a * b;
}

double my_div(double a, double b)
{
	return a / b;
}

int power(int a, int n)
{
	int N = 1;
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;
}