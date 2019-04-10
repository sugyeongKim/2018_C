#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Student.h"


int ReadData(STUDENT *std, int total_std_num) {

	FILE *ifp = fopen("Data.txt", "r");
	int res;
	//printf("¹ß");
	//if (ifp == NULL)
		//printf("¹ß");
	for (int i = 0; i < total_std_num; i++) {
		res = fscanf(ifp, "%s %d %d %d", std[i].name, &std[i].kor, &std[i].eng, &std[i].mat);
		std[i].ave = (double)(std[i].kor + std[i].eng + std[i].mat) / 3;
	}
	fclose(ifp);
	return 0;
}

int WriteData(STUDENT *std, int total_std_num) {
	FILE *ofp = fopen("Data2.txt", "w");
	for (int i = 0; i < total_std_num; i++) {
		fprintf(ofp, "%s %d %d %d %f\n", std[i].name, std[i].kor, std[i].eng, std[i].mat, std[i].ave);
	}


	fclose(ofp);
	return 0;
}