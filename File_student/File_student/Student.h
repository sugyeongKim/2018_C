#pragma once
#pragma once
#include "Menu.h"

struct student {
	char name[20];
	int kor, mat, eng;
	double ave;
}; typedef struct student STUDENT;


STUDENT* Initialize(int num);
//int AddStudentInfo(STUDENT *std, int totalcnt);
void ListByAverage(STUDENT *std, int total_std_num);
void ListByName(STUDENT *std, int total_std_num);
void PrintStdList(STUDENT *std, int total);
void FindStudent(STUDENT *std, int total_std_num);