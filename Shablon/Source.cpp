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
			/*22.	�������� �������, ������� �������� ��������� �� ������ � ��� ������, � ���������� ����� � ������������ ��� ��������� � ���� ����������-�������.*/
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
			/*24.	�������� ������� ��� ���������� ��������, ��� ����������, ��� � ���������.*/
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
			/*26.	�������� �������, ������� �������� ��������� �� ��������� ������ � ��� ������, 
			� ���������� ������� �������������� ���-������ �������, � ����� ���������� ������ � �������� ���������, ��������� �������� ������.*/
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
			/*25.	�������� �������, ������� �������� ��������� �� ������ � ��� ������ (������ ��� ���� �� ���������� ��� �����, � ���������� ��� ������ �� ��������� ������� �������)
			, � ���������� ���������� �������������, ������������� � ������� ��������� �������, ��������� �������� ������. � ������ ������� ����������� ���������� ������������ enum. 
			(enum ������ ���� ���������� �� ��� �����, �������� ��� ��� ����� ������� �� �������� ��� �����)*/
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
			printf("������� �������� �:");
			scanf("%d", &a);
			printf("������� �������� b:");
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