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
	int Buffer[ROWS * COLS] = {};//��������� �������� ������
	for (int i = 0; i < ROWS; i++)//���������� ���������� ������� ���� �������
	{
		for (int j = 0; j < COLS; j++)
		{
			A[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROWS; i++)//����� ��������� ������� ��������� �����
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter;
		int buffer_counter = 0;//������������ ������� ����� ���������� �������
		for (int i = 0; i < ROWS; i++)//������� ��������� ������� ���������� � ����������
		{
			for (int j = 0; j < COLS; j++)
			{
				Buffer[buffer_counter] = A[i][j];
				buffer_counter++;
			}
		}
		buffer_counter = 0;//��������� �������� ����� ���������� �������
		for (int i = 0; i < buffer_counter; i++)//����� ����������� ���������� �������
		{
			cout << Buffer[i] << tab; 
		}
		cout << endl<< delimiter;
		for (int i = 0; i < ROWS * COLS; i++)    //���������� ��������� ���������� �������
		{
			for (int j = i + 1; j < ROWS * COLS; j++)
			{
				if (Buffer[j] > Buffer[i])
				{
					int buffer = 0;//��������� ���������� ��� ������������ ����������� �����
					buffer = Buffer[j];
					Buffer[j] = Buffer[i];
					Buffer[i] = buffer;
				}
			}
		}
	for (int i = 0; i < buffer_counter; i++) //����� �� ������ ���������� ���������� ����������� �������
	{
		cout << Buffer[i] << tab;
	}
	cout << endl << delimiter;

	for (int i = 0; i < ROWS; i++)//���������� ��������� ������� �� ����������
	{
		for (int j = 0; j < COLS; j++)
		{
			A[i][j] = Buffer[buffer_counter]; 
			buffer_counter++;
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
}