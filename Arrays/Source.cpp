#include <iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {3,5,8};
	//���� ������� � ����������
	cout << "������� �������� ��������� �������:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i]; //���������� � ��. ������� �� ������
	}
	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab; //���������� � ��. ������� �� ������
	}
	cout << endl;
	//����� ������� � �������� �������
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//���������� ����� ����-� �������
	int sum=0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout <<"����� ��-�� �������:"<< sum << endl;
	cout << "������� ��������������:" << (double)sum / n << endl;//n ����� ���� ����� double 
//����� ������������ � ������������� �������� � �������
	int min, max;
	min = max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "M���������� �������� � �������:" << min << endl;
	cout << "������������ �������� � �������:" << max<< endl;
}