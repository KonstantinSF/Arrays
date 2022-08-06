#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int N = 10;
	int arr[N]={};
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 10;
		for (int j=i; j>=0; j--)
		{ 
			if (i == j)continue;
			while (arr[j] == arr[i]&&i!=j)
			{
				arr[i] = rand() % 10;
				j = i;
			}
		}
	}
	for (int i = 0; i < N; i++) cout << arr[i] << "\t"; 
	cout << endl;
}