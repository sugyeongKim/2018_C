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
		printf("1. 학생 정보 추가\n");
		printf("2. 성적순 출력\n");
		printf("3. 이름순 출력\n");
		printf("4. 학생 정보 출력\n");
		printf("5. 학생 정보 검색\n");
		printf("0. 종료\n");
		printf("-------------------\n");
		printf("메뉴 선택 : ");

		if (scanf("%d", &choice) == 0)
		{
			printf("잘못 입력하셨습니다.\n");
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
			printf("잘못 입력하셨습니다.\n");
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
		printf("1. 학생 정보 수정\n");
		printf("2. 학생 정보 삭제\n");
		printf("0. 이전 메뉴\n");
		printf("-------------------\n");
		printf("메뉴 선택 : ");

		if (scanf("%d", &choice) == 0)
		{
			printf("잘못 입력하셨습니다.\n");
			fflush(stdin);
			continue;
		}

		if (choice >= 0 && choice <= 2)
			return choice;
		else
			printf("잘못 입력하셨습니다.\n");
		continue;
	}
}

