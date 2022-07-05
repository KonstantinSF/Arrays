#include <iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
		const int n = 15;
		int arr[n];
		int minRand, maxRand;
		do
		{
			cout << "¬ведите миниальное случайное число:"; cin >> minRand;
			cout << "¬ведите максимальное случайное число:"; cin >> maxRand;
			if (minRand >= maxRand)cout << "Error:incorrect enter" << endl;

		} while (minRand>=maxRand);

		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % (maxRand - minRand) + minRand;// случ числа от 50  до 100
		}
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl; 
}