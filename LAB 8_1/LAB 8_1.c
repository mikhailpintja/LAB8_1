//Lab8.1.c Найбільший непарний елемент за допомогою функцій
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <conio.h>

int Input_Arr(const int N);
void Out_Arr(int a[10], const int N);
int Max_Arr(int a[10], const int N);

const int N = 10;
int a[10];

int main(void)
{
	setlocale(LC_CTYPE, "ukr");
	Input_Arr(N);
	system("cls");
	Out_Arr(a, N);
	printf("\n Максимальний непарний елемент вектору %d", Max_Arr(a, N));
	int getch(); getch();
	return 0;
}

//Функція - запиту на введення з клавіатури масиву розміром N 
int Input_Arr(const int N)
{
	printf("\n Введiть значення елементiв масиву A: \n");
	for (int i = 0; i < N; i++)
	{
		printf("\t а[%d]=", i + 1); scanf("%d", &a[i]);
	}
	return a;
}
//Функція виведення одномірного масиву на екран розміром N
void Out_Arr(int a[10], const int N)
{
	printf("\n Введений Вами вектор A[1,%d] = {", N);
	for (int i = 0; i < N; i++)
		printf("%d, ", a[i]);
	printf("\b\b}");
}
//Функція пошуку максимального з непарних елементів одномірного масиву
int Max_Arr(int a[10], const int N)
{
	int MAX = NULL;
	for (int i = 1; i < N; i++)
	{
		if (a[i] % 2 != 0) if (MAX < a[i]) MAX = a[i];
	}
	return MAX;
}
