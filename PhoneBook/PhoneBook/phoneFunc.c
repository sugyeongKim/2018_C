#pragma warning(disable:4996)
#include "common.h"
#include "screenOut.h"
#include "phoneFunc.h"

phoneData p[100] = { '\0' };

void InputPhoneData() {

	phoneData * pdata;
	pdata = (phoneData *)malloc(sizeof(phoneData));

	printf("�̸� �Է� >> ");
	scanf("%s", p[people].name);
	printf("��ȭ��ȣ �Է� >> ");
	scanf("%s", p[people].phoneNum);


	for (int i = 0; i < people; i++) {
		if (strcmp(p[i].name, p[people].name) == 0) {
			if (strcmp(p[i].phoneNum, p[people].phoneNum) == 0) {
				printf("�̹� �Է��� �������Դϴ�.");
				people--;
				system("PAUSE");
				break;
			}
		}
	}
	people++;
}

void ShowAllData() {
	for (int i = 0; i < people; i++) {
		ShowPhoneInfo(p[i]);
	}
	system("PAUSE");
}

void SearchPhoneData(void) {
	char name[10] = { NULL };
	int a = 0;

	printf("\nã�� �̸��� �Է����ּ��� >> ");
	scanf("%s", name);

	for (int i = 0; i < people; i++) {
		if (strcmp(name, p[i].name) == 0) {
			ShowPhoneInfo(p[i]);

		}
		else a++;
	}
	if (a == people)
		printf("ã�� �����Ͱ� ���������ʽ��ϴ�.\n");

	system("PAUSE");

}

void DeletePhoneData(void) {
	phoneData pPhone[10] = { NULL };
	char name[10] = { NULL };
	char phoneNum[10] = { NULL };
	int c = 0, num = 0, n = 0;

	printf("������ �̸��� �Է����ּ��� >> ");
	scanf("%s", name);

	for (int i = 0; i < people; i++) {
		if (strcmp(name, p[i].name) == 0)
			c++;
	}

	if (c > 1) {
		for (int i = 0, c = 1; i < people; i++) {
			if (strcmp(name, p[i].name) == 0) {
				printf("%d��° ��������\n", c);
				ShowPhoneInfo(p[i]);
				c++;
			}
		}

		printf("������ ��ȭ��ȣ�� �Է��ϼ��� >> ");
		scanf("%s", &phoneNum);

		for (int i = 0; i < people; i++)
			if (strcmp(phoneNum, p[i].phoneNum) == 0) {
				pPhone[0] = p[i];
			}

		for (int i = 0; i < people; i++) {
			if (strcmp(p[i].name, pPhone[0].name) == 0)
				if (strcmp(p[i].phoneNum, pPhone[0].phoneNum) == 0)
					for (int j = i; j < people; j++, i++) {
						strcpy(p[i].name, p[j + 1].name);
						strcpy(p[i].phoneNum, p[j + 1].phoneNum);
					}
		}
		people--;

	}


	else if (c == 1) {
		for (int i = 0; i < people; i++) {
			if (strcmp(name, p[i].name) == 0)
				for (int j = i; j < people; j++, i++) {
					strcpy(p[i].name, p[j + 1].name);
					strcpy(p[i].phoneNum, p[j + 1].phoneNum);
				}
		}
		people--;
		printf("�����Ǿ����ϴ�");
	}
	else printf("ã�� �����Ͱ� �������� �ʽ��ϴ�");
}


void ChangePhoneData(void) {
	char name[10] = { NULL };
	printf("��ȭ��ȣ�� �ٲ� �̸��� �Է����ּ��� >> ");
	scanf("%s", name);

	for (int i = 0; i < people; i++)
		if (strcmp(name, p[i].name) == 0) {
			printf("��ȭ��ȣ�� �Է����ּ��� >> ");
			scanf("%s", &p[i].phoneNum);
			printf("\n ��ȭ��ȣ�� �ٲ�����ϴ�.");
		}

	system("PAUSE");

}

void StoreDataToFile(void) {

}

void LoadDataFromFile(void) {

}

void StoreDataFile() {
	int i;
	FILE * fp = fopen("phoneData.dat", "wb");

	fwrite(&people, sizeof(int), 1, fp);

	for (i = 0; i < people; i++)
		fprintf(fp, "%s\n%s\n", p[i].name, p[i].phoneNum);

	fclose(fp);
}

void LordDataFile() {
	int i, sLen;
	FILE * fp = fopen("phoneData.dat", "r");
	if (fp == NULL)
		return;

	fread(&people, sizeof(int), 1, fp);

	for (i = 0; i < people; i++) {
		//phoneList[i] = (phoneData *)malloc(sizeof(phoneData));
		fgets(p[i].name, NAME_LEN, fp);
		sLen = strlen(p[i].name);
		p[i].name[sLen - 1] = 0;

		fgets(p[i].phoneNum, PHONE_LEN, fp);
		sLen = strlen(p[i].phoneNum);
		p[i].phoneNum[sLen - 1] = 0;
	}
}