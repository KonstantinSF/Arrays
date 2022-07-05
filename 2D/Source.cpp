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
	const int ROWS = 8;//���������� �����
	const int COLS = 5;//���������� ��������� ������
	int arr[ROWS][COLS] =//������������� ������� �������
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
	for (int i = 0; i < ROWS; i++)//���������� ������ ���� �������
	{
		for (int j = 0; j < COLS; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROWS; i++)//����� �� ����� ������� �
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter<< endl;//����� �����������
	for (int i = 0; i < ROWS; i++)//����� ������� �
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter << endl; //����� �����������
	int C[ROWS][COLS] = {};//��������� ��������� ������� �
#ifdef MATRIX_ADDITION
						   //Matrix addition:
	//��� �������� ������ �� �������� ������ �������, ������ ������� �������
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	//���-�� ������ �����-� ��-�� ��������� ������.
#endif
#ifdef MATRIX_MULTIPLICATION//Matix multiplication
	//��� ��������� ������, �� �������� �������
	//��� ��������� 1�� ��-�� ������� � �����-� ��� ��-�� ������ ������� �, 
	//�������� �� �����-�� ��-�� ������� ������� � � ���������� ������������ �������
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			/*C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0] + A[0][2] * B[2][0];
			  C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1] + A[0][2] * B[2][1];
			  C[0][2] = A[0][0] * B[0][2] + A[0][1] * B[1][2] + A[0][2] * B[2][2];*/
			/*C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0] + A[1][2] * B[2][0];
			  C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1] + A[1][2] * B[2][1];
			  C[1][2] = A[1][0] * B[0][2] + A[1][1] * B[1][2] + A[1][2] * B[2][2];������� ����� ��������� ��������� ��������*/
			/*C[0][j] = A[0][0] * B[0][j] + A[0][1] * B[1][j] + A[0][2] * B[2][j];����������� j
			  C[1][j] = A[1][0] * B[0][j] + A[1][1] * B[1][j] + A[1][2] * B[2][j];*/
			  //C[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j] + A[i][2] * B[2][j]; ����� �������������� ���������� ���-�� ��������� � ���-�� �� B[COLS]
			for (int k = 0; k < COLS; k++)
			{
				C[i][j]+= A[i][k] * B[k][j];
			}
		}
	}
#endif
	for (int i = 0; i < ROWS; i++)//����� �� ����� ������� �
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << C[i][j] << tab;
		}
		cout << endl;
	}
}