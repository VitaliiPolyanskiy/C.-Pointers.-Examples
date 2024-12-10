#include <iostream>
using namespace std;

// Функция получает указатель на массив и его размер, и 
// заполняет массив случайными числами

void Init(int ptr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		*ptr = rand() % 10 + 1;
		ptr++;
	}
}

// Функция получает указатель на массив и его размер, и 
// выводит массив на экран

void Print(int *ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << '\t';
	}
}

// Функция получает указатель на массив и его размер, и 
// возвращает сумму и произведение его элементов в двух 
// параметрах-указателях.

void Sum(int *ptr, int size, int *s, int *p)
{
	for (int i = 0; i < size; i++)
	{
		*s += *(ptr + i);
		*p *= ptr[i];
	}
}

// Функция получает указатель на двумерный массив и его размер, 
// и заполняет массив случайными числами

void Init(int ptr[][4], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			ptr[i][j] = rand() % 50;
		}
	}
}

// Функция получает указатель на двумерный массив и его размер, 
// и выводит массив на экран

void Print(int(*ptr)[4], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << *(*(ptr + i) + j) << '\t';
		}
		cout << endl;
	}
}

// Функция получает указатель на двумерный массив и его размер, 
// и возвращает среднее арифметическое элементов массива, 
// а также количество чётных и нечётных элементов.

double Average(int (*ptr)[4], int size, int *odd, int *even)
{
	int sum = 0;
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<4; j++)
		{
			sum += ptr[i][j];
			if(ptr[i][j] % 2 == 0)
				(*even)++;
			else
				(*odd)++;
		}
	}
	return sum/double(size*4);
}

// Функция получает адрес нулевого элемента двумерного массива
// (элемента с индексами [0][0]), число строк и столбцов,
// и заполняет массив случайными числами
void Init(int *ptr, int row, int column)
{
	for (int i = 0; i < row * column; i++)
	{
		ptr[i] = rand() % 50;
	}
}

// Функция получает адрес нулевого элемента двумерного массива
// (элемента с индексами [0][0]), число строк и столбцов,
// и выводит массив на экран
void Print(int *ptr, int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << ptr[i * column + j] << '\t';
		}
		cout << endl;
	}
}

// Функция получает адрес нулевого элемента двумерного массива
// (элемента с индексами [0][0]), число строк и столбцов,
// и возвращает среднее арифметическое элементов массива, 
// а также количество чётных и нечётных элементов.

double Average(int *ptr, int row, int column, int *odd, int *even)
{
	int sum = 0;
	for (int i = 0; i < row * column; i++)
	{
		sum += ptr[i];
		if (ptr[i] % 2 == 0)
			(*even)++;
		else
			(*odd)++;
	}
	return sum / double(row * column);
}