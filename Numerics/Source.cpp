#include <iostream>
using namespace std;
//#define DEC_TO_BIN
//#define REPEAT_NUM
#define REPEAT_NUM1
void main()
{
	setlocale(LC_ALL, "");
#ifdef DEC_TO_BIN
	int decimal; //десятичное число введенное пользователем
	cout << "Введите десятичное число:"; cin >> decimal;
	const int MAX_SIZE = 32; //int = 4Bytes Bytes = 32bit
	bool bin[MAX_SIZE] = {}; //этот массив будет хранить разряды двоичного числа

	int i = 0; //счетчик разрядов
	while (decimal)
	{
		bin[i] = decimal % 2;//получаем младший разряд двоичного числа
		decimal /= 2;//убираем полученный разряд двоичного числа
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
	int BUF[n] = {};//буфер для накопления чисел, которые уже проверили на повторяемость
	for (int i = 0; i < n; i++) ARR[i] = rand() % 9;//меньше 10, чтобы были повторения в массиве
	for (int i = 0; i < n; i++)cout << ARR[i] << "\t";//вывод элементов полученного массива
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		int checked_num = 0;//результат сверки i числа с массивом проверенных чисел. 0-нет совпадений, 1-уже проверили
			for (int k = 0; k < n; k++)//сверка исх массива с массивом проверенных чисел
			{
				if (ARR[i] == BUF[k]) checked_num++;//при совпадении результат +1
			}
		if (checked_num != 0)continue;//пропуск итерации проверки i числа 
		int counter = 0;//счетчик повторений
		for (int j = i+1; j < n; j++)//i+1 чтобы не сравнивать число с собой, а брать след. справа
		{
			BUF[i] = ARR[i];//записываем проверенные числа в массив
			//if (i == j)break;//чтобы не сравнивть число с самим собой
			if (ARR[i] == ARR[j])counter++;//считаем повторения
		}
		if (counter != 0)cout << ARR[i]<<" repeat "<< counter+1<< " times"<< endl;
	}
	cout << endl;
#endif
#ifdef REPEAT_NUM1
	const int n = 10;
	int arr[n] = {};
	for (int i = 0; i < n; i++) arr[i] = rand() % 10;//меньше 10, чтобы были повторения в массиве
	for (int i = 0; i < n; i++) cout << arr[i] << "\t";//вывод элементов полученного массива
	
	for (int i = 0; i < n; i++)
	{
		bool never_before = true; //предполагаем, что текущее значение ранее не встречалось
		//но это нужно проверить
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