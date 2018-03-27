#include<iostream>
#include<stdio.h>
#include<locale.h>
#include"Header.h"
#include<time.h>

int i, j;
void ZappMass(int *mass, int *row)
{
	for (i = 0;i < *row;i++)
		*(mass + i) = -5 + rand() % 20;
}
void PrintMass(int *mass, const int *row)//что бы случайно не изменить данное значение
{
	for (i = 0;i < *row;i++)
		printf("%d\t", *(mass + i));
	printf("\n--------------------------------------\n");
}
void SortingMass(int *mass, int *row)
{
	int m;
	for (i = 0;i < *row;i++)
	{
		for (j = *row - 1;j >= i;j--)
		{
			if (*(mass + j) < *(mass + (j - 1)))
			{
				m = *(mass + j);
				*(mass + j) = *(mass + (j - 1));
				*(mass + (j - 1)) = m;
			}
		}
	}
}
void Summ_and_Proiz_Mass(int *mass, int*row, int *summ, long long *proiz)
{
	for (i = 0;i < *row;i++)
	{
		*summ += *(mass + i);
		*proiz *= *(mass + i);
	}
	printf("сумма всех элементов массива = %d\n", *summ);
	printf("произведение всех элементов массива = %d\n", *proiz);
	printf("\n--------------------------------------\n");
}
void PrintBiMass(int *mass, int *row, int *stolb)
{
	for (i = 0;i < *row;i++)
	{
		for (j = 0;j < *stolb;j++)
		{
			printf("%d\t", *(mass + i * *stolb + j));
		}
		printf("\n");
	}
}
void ZappBiMass(int *mass, int*row, int *stolb)
{
	for (i = 0;i < *row;i++)
	{
		for (j = 0;j < *stolb;j++)
		{
			*(mass + i * *stolb + j) = 1 + rand() % 20;
		}
	}
}
void sredneeBiMass(int *mass, int*row, int *stolb, int *arif, int *chet, int *nechet)
{
	int chek = 0;
	for (i = 0;i < *row;i++)
	{
		for (j = 0;j < *stolb;j++)
		{
			chek++;
			*arif += *(mass + i**stolb + j);
			if (*(mass + i* *stolb + j) % 2 == 0)
				*chet = *chet + 1;
			else
				*nechet = *nechet + 1;
		}
	}
	*arif = *arif / chek;
	printf("среднее арифмитическое = %d\nколличестов четных элементов = %d\nколличество не четных элементов = %d\n", *arif, *chet, *nechet);
}
int rec(int a, int b)
{
	if (b == a-1)
	{
		return 0;
	}
	return b + rec(a,b - 1);
}
int myEnum()
{
	printf("какие числа найти в массиве? 1-отрицательные; 2-положительные; 3-NULL:");
	int a;
	scanf("%d", &a);
	return a;
	printf("\n");
}
void mass123(int *mass, int *row)
{
	int a = myEnum();
	switch (a)
	{
	case otr:
	{
		int chek = 0;
		for (i = 0;i < *row;i++)
		{
			if (*(mass + i) < 0)
				chek++;
		}
		printf("элементов меньше нуля = %d\n", chek);
	}
	break;
	case pol:
	{
		int chek = 0;
		for (i = 0;i < *row;i++)
		{
			if (*(mass + i) > 0)
				chek++;
		}
		printf("элементов больше нуля = %d\n", chek);
	}
	break;
	case null:
	{
		int chek = 0;
		for (i = 0;i < *row;i++)
		{
			if (*(mass + i) == 0)
				chek++;
		}
		printf("элементов равные 0  = %d\n", chek);
	}
		break;
	default:
		break;
	}
}


