#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int N = 10;
	int arr[N];
	for (int i = 0; i < N; i++)
	{
		do
		{
			if (arr[i] == arr[!i])arr[i] = rand() % 11;
		} while (arr[i] != arr[!i]);
	}
	for (int i = 0; i < N; i++) cout << arr[i] << "\t"; 
	cout << endl;
}