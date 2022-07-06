#include <iostream>
using namespace std;
#define delimiter "------------------\n"
#define tab "\t"
void main()
{
	setlocale(LC_ALL, " ");
	//Matrix 2D sort
	const int COLS = 3;
	const int ROWS = 3;
	int A[ROWS][COLS] = {};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			A[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter;
}