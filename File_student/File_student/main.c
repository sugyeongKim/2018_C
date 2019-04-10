#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Student.h"
#include "Menu.h"
#include "FileIO.h"

int person = 0;

int main() {

	STUDENT *std = NULL;
	int total_std_num = 0;
	int std_num = 0;
	int menu;

	printf("��ü �л� ���� �Է��ϼ��� : ");
	scanf("%d", &total_std_num);
	std = malloc(sizeof(STUDENT) * total_std_num);
	if (std != NULL)
		memset(std, 0, sizeof(STUDENT) *total_std_num);


	ReadData(std, total_std_num);

	while (1) {
		menu = SelectMenu();

		if (menu == QUIT_PROGRAM)
			break;

		switch (menu) {
		case ADD_STUDENT:
			//person = AddInfo(std, total_std_num);
			//ReadData(std, total_std_num);
			//if ((person == 0) || (person == total_std_num))
			//	printf("�� �̻� �л� ������ �߰��� �� �����ϴ�.\n");
			//else
			//	printf("�л� ������ �߰��Ǿ����ϴ�.\n");
			break;
		case LIST_BY_AVE:
			ListByAverage(std, total_std_num);
			break;
		case LIST_BY_NAME:
			ListByName(std, total_std_num);
			break;
		case PRINT_STUDENT:
			PrintStdList(std, total_std_num);
			break;
		case FIND_STUDENT:
			person = total_std_num;
			FindStudent(std, total_std_num);
			break;
		case 6:

			break;
		}
	}

	WriteData(std, total_std_num);
	free(std);
	std = NULL;
	return 0;



}