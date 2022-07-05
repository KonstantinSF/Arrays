#include <iostream>
using namespace std;
#define tab "\t"
#include "Windows.h"
void main()
{
	setlocale(LC_ALL, "");
	const int n=10;
	int arr[n]= {1,2,3,4,5,6,7,8,9,10};
	for (int i = 0; i < n; i++) cout << arr[i] << tab;
	cout << endl;
		int shifts; 
		cout << "¬ведите число сдвига:"; cin >> shifts;
		for (int i = 0;i < shifts; i++)
		{
			int buffer = arr[n - 1];
			for (int i = n - 1; i > 0; i--)
			{
				arr[i] = arr[i - 1];
			}
			arr[0] = buffer;
			system("CLS");
			for (int i = 0; i < n; i++) cout << arr[i] << tab;
			cout << endl;
			Sleep (1000); 
		}	
}