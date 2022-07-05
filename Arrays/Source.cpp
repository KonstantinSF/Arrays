#include <iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {3,5,8};
	//ввод массива с клавиатуры
	cout << "Введите значение элементов массива:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i]; //обращаемся к эл. массива на запись
	}
	//вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab; //обращаемся к эл. массива на чтение
	}
	cout << endl;
	//вывод массива в обратном порядке
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//вычисление суммы элем-в массива
	int sum=0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout <<"Сумма эл-ов массива:"<< sum << endl;
	cout << "Среднее арифметическое:" << (double)sum / n << endl;//n здесь тоже будет double 
//поиск минимального и максимального значения в массиве
	int min, max;
	min = max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "Mинимальное значение в массиве:" << min << endl;
	cout << "Максимальное значение в массиве:" << max<< endl;
}