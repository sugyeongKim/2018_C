#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Student.h"
#include "FileIO.h"

int AddInfo(STUDENT *std, int total_std) {

	STUDENT *p = NULL;
	p = &std[person];
	double totalave = 0;

	if (person == total_std)
		return 0;

	printf("이름, 국어, 영어, 수학 점수를 입력 : \n");
	scanf("%s %d %d %d", p->name, &p->kor, &p->eng, &p->mat);
	p->ave = (double)(p->kor + p->eng + p->mat) / 3;
	totalave += p->ave;
	(person)++;

	return person;
}

void ListByAverage(STUDENT *std, int total_std_num) {
	STUDENT temp;
	for (int i = 0; i < total_std_num; i++)
		for (int j = i + 1; j < total_std_num; j++) {
			if (std[i].ave < std[j].ave) {
				temp = std[i];
				std[i] = std[j];
				std[j] = temp;
			}
		}
	printf("======================================\n");
	printf("이름\t국어\t영어\t수학\t평균\n");

	for (int i = 0; i < total_std_num; i++) {
		printf("%s\t %2d\t %2d\t %2d\t%.2f\n", std[i].name, std[i].kor,
			std[i].eng, std[i].mat, std[i].ave);
	}
	printf("======================================\n");

}

void ListByName(STUDENT *std, int total_std_num) {
	STUDENT temp;
	for (int i = 0; i < total_std_num; i++)
		for (int j = i + 1; j < total_std_num; j++) {
			if (std[i].name < std[j].name) {
				temp = std[i];
				std[i] = std[j];
				std[j] = temp;
			}
		}
	printf("======================================\n");
	printf("이름\t국어\t영어\t수학\t평균\n");

	for (int i = 0; i < total_std_num; i++) {
		printf("%s\t %2d\t %2d\t %2d\t%.2f\n", std[i].name, std[i].kor,
			std[i].eng, std[i].mat, std[i].ave);
	}
	printf("======================================\n");

}

void PrintStdList(STUDENT *std, int total_std) {
	STUDENT *p = NULL;
	p = &std[total_std];

	printf("======================================\n");
	printf("이름\t국어\t영어\t수학\t평균\n");

	for (int i = 0; i < total_std; i++) {
		printf("%s\t %2d\t %2d\t %2d\t%.2f\n", std[i].name, std[i].kor,
			std[i].eng, std[i].mat, std[i].ave);
	}
	printf("======================================\n");

}

void FindStudent(STUDENT *std, int total_std_num) {
	char name[20];
	int findMenu = 0;
	int i;
	STUDENT *p = NULL;
	printf("찾을 학생 명: ");
	scanf("%s", name);

	for (i = 0; i < total_std_num; i++) {
		if (strcmp(std[i].name, name) == 0) {
			printf("%s\t %2d  %2d  %2d %2f\n", std[i].name, std[i].kor,
				std[i].eng, std[i].mat, std[i].ave);
			p = &std[i];
			break;
		}
	}


	while (1) {
		findMenu = SelectFindMenu();
		if (findMenu == PREVIOUS_MENU)
			break;
		switch (findMenu) {
		case MODIFY_STUDENT:
			printf("바꿀 정보를 입력해 주세요: ");
			scanf("%d %d %d", &p->kor, &p->eng, &p->mat);
			p->ave = (double)(p->kor + p->eng + p->mat) / 3;
			break;
		case DELETE_STUDENT:
			for (int j = i; j < person; j++)
				std[j] = std[j + 1];
			(person--);

			break;
		}
	}
}