#include<iostream>
using namespace std;
//#define UNIQUE_RANDOM
//#define UNIQUE_RANDOM1
#define UNIQUE_RANDOM2
void main()
{
	setlocale(LC_ALL, "");
	const int N = 10;
	int arr[N]={};
#ifdef UNIQUE_RANDOM
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
#endif
#ifdef UNIQUE_RANDOM1
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % N;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
#endif
#ifdef UNIQUE_RANDOM2
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		bool unique;
		do
		{
			unique = true;
			arr[i] = rand() % N;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
#endif
	for (int i = 0; i < N; i++) cout << arr[i] << "\t"; 
	cout << endl;
}