#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	const unsigned int D1 = 3;
	const unsigned int D2 = 5;

	double ary[D1][D2];
	int count = 15;
	double vault = 0;

	for (int i = 0; i < D1; i++) 
	{
		for (int j = 0; j < D2; j++) 
		{
			cin >> ary[i][j];
		}
	}

	cout << endl;

	cout << endl;

	for (int i = 0; i < D1; i++)
	{
		for (int j = 0; j < D2; j++)
		{
			cout << "ary[" << i << "," << j << "]= " << ary[i][j] << "\n";
		}
	}
	cout << endl;

	for (int i = 0; i < D1; i++)
	{
		for (int j = 0; j < D2; j++)
		{
			vault += ary[i][j];
		}
	}

	cout << "Сумма всех чисел массива равна: " << vault << "\n";
	cout << "Среднее арифметическое равно: " << vault / count << "\n";
}
