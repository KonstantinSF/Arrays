#include <iostream>
using namespace std;
//#define DEC_TO_BIN
//#define REPEAT_NUM
#define REPEAT_NUM1
void main()
{
	setlocale(LC_ALL, "");
#ifdef DEC_TO_BIN
	int decimal; //���������� ����� ��������� �������������
	cout << "������� ���������� �����:"; cin >> decimal;
	const int MAX_SIZE = 32; //int = 4Bytes Bytes = 32bit
	bool bin[MAX_SIZE] = {}; //���� ������ ����� ������� ������� ��������� �����

	int i = 0; //������� ��������
	while (decimal)
	{
		bin[i] = decimal % 2;//�������� ������� ������ ��������� �����
		decimal /= 2;//������� ���������� ������ ��������� �����
		i++;
	}
	for (i--; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0) cout << " ";
	}
	cout << endl;
#endif

#ifdef REPEAT_NUM
	const int n = 10;
	int ARR[n] = {};
	int BUF[n] = {};//����� ��� ���������� �����, ������� ��� ��������� �� �������������
	for (int i = 0; i < n; i++) ARR[i] = rand() % 9;//������ 10, ����� ���� ���������� � �������
	for (int i = 0; i < n; i++)cout << ARR[i] << "\t";//����� ��������� ����������� �������
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		int checked_num = 0;//��������� ������ i ����� � �������� ����������� �����. 0-��� ����������, 1-��� ���������
			for (int k = 0; k < n; k++)//������ ��� ������� � �������� ����������� �����
			{
				if (ARR[i] == BUF[k]) checked_num++;//��� ���������� ��������� +1
			}
		if (checked_num != 0)continue;//������� �������� �������� i ����� 
		int counter = 0;//������� ����������
		for (int j = i+1; j < n; j++)//i+1 ����� �� ���������� ����� � �����, � ����� ����. ������
		{
			BUF[i] = ARR[i];//���������� ����������� ����� � ������
			//if (i == j)break;//����� �� ��������� ����� � ����� �����
			if (ARR[i] == ARR[j])counter++;//������� ����������
		}
		if (counter != 0)cout << ARR[i]<<" repeat "<< counter+1<< " times"<< endl;
	}
	cout << endl;
#endif
#ifdef REPEAT_NUM1
	const int n = 10;
	int arr[n] = {};
	for (int i = 0; i < n; i++) arr[i] = rand() % 10;//������ 10, ����� ���� ���������� � �������
	for (int i = 0; i < n; i++) cout << arr[i] << "\t";//����� ��������� ����������� �������
	
	for (int i = 0; i < n; i++)
	{
		bool never_before = true; //������������, ��� ������� �������� ����� �� �����������
		//�� ��� ����� ���������
		for (int j = 0; j < i; j++)
		{
			if (arr[i]==arr[j])
			{
				never_before = false;
				break;
			}
		}
		if (never_before = false)
		{
			int count = 0; //repeat counter
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j])
				{
					count++;
				}
			}
		if (count > 0)cout << arr[i] << " repeat" << count << "times"<< endl;
		}
	}
#endif
}