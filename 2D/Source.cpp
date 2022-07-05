#include <iostream>
using  namespace std;
#define tab "\t"
#define delimiter "\n-----------------------\n"
//#define BASICS
//#define MATRIX_ADDITION
#define MATRIX_MULTIPLICATION
void main()
{
	setlocale(LC_ALL, " ");
#ifdef BASICS
	const int ROWS = 8;//количество строк
	const int COLS = 5;//количество элементов строки
	int arr[ROWS][COLS] =//инициализация двумерн массива
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
#endif
	// The Matrix
	const int ROWS = 3; 
	const int COLS = 3; 
	int A[ROWS][COLS];
	int B[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)//заполнение матриц случ числами
	{
		for (int j = 0; j < COLS; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROWS; i++)//вывод на экран матрицы А
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter<< endl;//вывод разделителя
	for (int i = 0; i < ROWS; i++)//вывод матрицы В
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter << endl; //вывод разделителя
	int C[ROWS][COLS] = {};//инициация результир матрицы С
#ifdef MATRIX_ADDITION
						   //Matrix addition:
	//при сложении матриц мы получаем третью матрицу, каждый элемент которой
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	//явл-ся суммой соотв-х эл-ов слагаемых матриц.
#endif
#ifdef MATRIX_MULTIPLICATION//Matix multiplication
	//при умножении матриц, мы получаем матрицу
	//для получения 1го эл-та матрицы С необх-о все эл-ты строки матрицы А, 
	//умножить на соотв-ие эл-ты столбца матрицы В и полученные произведения сложить
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			/*C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0] + A[0][2] * B[2][0];
			  C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1] + A[0][2] * B[2][1];
			  C[0][2] = A[0][0] * B[0][2] + A[0][1] * B[1][2] + A[0][2] * B[2][2];*/
			/*C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0] + A[1][2] * B[2][0];
			  C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1] + A[1][2] * B[2][1];
			  C[1][2] = A[1][0] * B[0][2] + A[1][1] * B[1][2] + A[1][2] * B[2][2];смотрим общую тенденцию изменения индексов*/
			/*C[0][j] = A[0][0] * B[0][j] + A[0][1] * B[1][j] + A[0][2] * B[2][j];подставляем j
			  C[1][j] = A[1][0] * B[0][j] + A[1][1] * B[1][j] + A[1][2] * B[2][j];*/
			  //C[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j] + A[i][2] * B[2][j]; видно закономерность увеличения кол-ва слагаемых в зав-ти от B[COLS]
			for (int k = 0; k < COLS; k++)
			{
				C[i][j]+= A[i][k] * B[k][j];
			}
		}
	}
#endif
	for (int i = 0; i < ROWS; i++)//вывод на экран матрицы С
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << C[i][j] << tab;
		}
		cout << endl;
	}
}