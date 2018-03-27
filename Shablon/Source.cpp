#include<iostream>
#include<stdio.h>
#include<locale.h>
#include"Header.h"
#include<time.h>

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	short int n, exit;
	do
	{
		printf("please enter number of a task?: ");
		scanf("%hu", &n);
		switch (n)
		{
		case 1:
		{
			/*22.	Написать функцию, которая получает указатель на массив и его размер, и возвращает сумму и произведение его элементов в двух параметрах-ссылках.*/
			int mass[10];
			int row = 10;
			int summ = 0;
			long long proiz = 1;
			ZappMass(mass, &row);
			PrintMass(mass, &row);
			Summ_and_Proiz_Mass(mass, &row, &summ, &proiz);
		}
		break;
		case 2:
		{
			/*24.	Написать Функции для распечатки массивов, как одномерных, так и двумерных.*/
			int mass[10];
			int mas[4][4];
			int row = 10;
			int row2 = 4;
			int stolb = 4;
			ZappMass(mass, &row);
			PrintMass(mass, &row);
			ZappBiMass(*mas, &row2, &stolb);
			PrintBiMass(*mas, &row2, &stolb);
		}
		break;
		case 3:
		{
			/*26.	Написать функцию, которая получает указатель на двумерный массив и его размер, 
			и возвращает среднее арифметическое эле-ментов массива, а также количество чётных и нечётных элементов, используя механизм ссылок.*/
			int mas[4][4];
			int row = 4;
			int stolb = 4;
			int arif = 0;
			int chet = 0;
			int nechet = 0;
			ZappBiMass(*mas, &row, &stolb);
			PrintBiMass(*mas, &row, &stolb);
			sredneeBiMass(*mas, &row, &stolb, &arif, &chet, &nechet);
		}
		break;
		case 4:
		{
			/*25.	Написать функцию, которая получает указатель на массив и его размер (зармер при этом не передавать как число, а передавать как ссылку на последний элемент массива)
			, и возвращает количество отрицательных, положительных и нулевых элементов массива, используя механизм ссылок. В данном задании обязательно необходимо использовать enum. 
			(enum должен быть глобальным на все файлы, подумать как это можно сделать не объявляя его везде)*/
			int mass[10];
			int row = 10;
			ZappMass(mass, &row);
			PrintMass(mass, &row);
			mass123(mass, &row);
		}
		break;
		case 5:
		{
			int a, b;
			printf("введите значение а:");
			scanf("%d", &a);
			printf("введите значение b:");
			scanf("%d", &b);
			printf("%d\n", rec(a, b));
		}
		break;
		default:printf("There is no task! Please enter number of a task\n");
			break;
		}
		printf("To continue? 1-Yes 2-No: ");
		scanf("%hu", &exit);
		printf("\n");
	} while (exit == 1);
}