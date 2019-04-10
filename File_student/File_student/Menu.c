/* Menu.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Menu.h"


int SelectMenu(void)
{
	int choice;

	while (1)
	{
		printf("\n-------------------\n");
		printf("1. �л� ���� �߰�\n");
		printf("2. ������ ���\n");
		printf("3. �̸��� ���\n");
		printf("4. �л� ���� ���\n");
		printf("5. �л� ���� �˻�\n");
		printf("0. ����\n");
		printf("-------------------\n");
		printf("�޴� ���� : ");

		if (scanf("%d", &choice) == 0)
		{
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			fflush(stdin);
			continue;
		}

		switch (choice)
		{
		case ADD_STUDENT:
			return ADD_STUDENT;
		case LIST_BY_AVE:
			return LIST_BY_AVE;
		case LIST_BY_NAME:
			return LIST_BY_NAME;
		case PRINT_STUDENT:
			return PRINT_STUDENT;
		case FIND_STUDENT:
			return FIND_STUDENT;
		case QUIT_PROGRAM:
			return QUIT_PROGRAM;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			continue;
		}
	}
}





int SelectFindMenu(void)
{
	int choice;

	while (1)
	{
		printf("\n-------------------\n");
		printf("1. �л� ���� ����\n");
		printf("2. �л� ���� ����\n");
		printf("0. ���� �޴�\n");
		printf("-------------------\n");
		printf("�޴� ���� : ");

		if (scanf("%d", &choice) == 0)
		{
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			fflush(stdin);
			continue;
		}

		if (choice >= 0 && choice <= 2)
			return choice;
		else
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
		continue;
	}
}

