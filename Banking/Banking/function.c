#include"head.h"

void gotoxy(int x, int y) {
	COORD position = { 0,0 };
	position.X = x;
	position.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void mouse(ACCOUNT *acc, int i) {
	system("cls");
	printf("[1] ���� ����\n\n");
	printf("�Է� �� Enter Ű�� ��������.\n\n");
	printf("�̸� : "); scanf("%s", acc[i].name);
	printf("ID : "); scanf("%s", acc[i].id);
	printf("��ȣ : "); scanf("%d", &acc[i].passwd);
	printf("�ּ� : "); scanf("%s", acc[i].address);
	printf("��ȭ��ȣ : "); scanf("%s", acc[i].phone);
	printf("�Աݾ� : "); scanf("%d", &acc[i].balance);

}

void Print(ACCOUNT *acc, int cnt) {
	char ID[10];
	int PASS;
	system("cls");
	printf("[2] ���� ��ȸ\n\n");
	printf("�Է� �� Enter Ű�� ��������.\n\n");
	printf("ID : "); scanf("%s", &ID);
	printf("��ȣ : "); scanf("%d", &PASS);

	for (int i = 0; i < cnt; i++) {
		if (strcmp(ID, acc[i].id) == 0 && (PASS == acc[i].passwd)) {
			system("cls");
			printf("[2] ���� ��ȸ ���\n\n");
			printf("�̸� : %s \t �ܰ� : %d\n", acc[i].name, acc[i].balance);
			printf("ID : %s \t ��ȣ : %d\n", acc[i].id, acc[i].passwd);
			printf("��ȭ��ȣ  %s\n", acc[i].phone);
			printf("�ּ� :  %s\n", acc[i].address);
			break;
		}
		else {
			printf("Ʋ�Ƚ��ϴ�\n");
		}
	}
}

void deposit(ACCOUNT *acc, int cnt) {
	char ID[10];
	int PASS;
	long money;
	system("cls");
	printf("[3] �Ա� \n");
	printf("\n�Է� �� Enter Ű�� ��������.\n");
	printf("ID : "); scanf("%s", &ID);
	printf("��ȣ : "); scanf("%d", &PASS);
	printf("�Աݾ� : "); scanf("%ld", &money);

	for (int i = 0; i < cnt; i++) {
		if (strcmp(ID, acc[i].id) == 0 && (PASS == acc[i].passwd)) {
			acc[i].balance += money;
			system("cls");
			printf("[3] �Ա� \n");
			printf("\n�Է� �� Enter Ű�� ��������.\n");
			printf("ID : %s\n", acc[i].id);
			printf("��ȣ : %d\n", acc[i].passwd);
			printf("�Աݾ� : %d\n", money);
			printf("�Ա� ���� : �ݾ� %d���� �ԱݵǾ����ϴ�.\n", money);
			break;
		}
		else {
			system("cls");
			printf("���̵� ��ȣ�� Ʋ�Ƚ��ϴ�\n");
		}
	}
}

void withdraw(ACCOUNT *acc, int cnt) {
	char ID[10];
	int PASS;
	long money;
	system("cls");
	printf("[4] ��� \n");
	printf("\n�Է� �� Enter Ű�� ��������.\n");
	printf("ID : "); scanf("%s", &ID);
	printf("��ȣ : "); scanf("%d", &PASS);
	printf("��ݾ� : "); scanf("%ld", &money);

	for (int i = 0; i < cnt; i++) {
		if (strcmp(ID, acc[i].id) == 0 && (PASS == acc[i].passwd)) {
			if (acc[i].balance >= money)
				acc[i].balance -= money;
			system("cls");
			printf("[4] ��� \n");
			printf("\n�Է� �� Enter Ű�� ��������.\n");
			printf("ID : %s\n", acc[i].id);
			printf("��ȣ : %d\n", acc[i].passwd);
			printf("��ݾ� : %d\n", money);
			printf("��� ���� : �ݾ� %d���� ��ݵǾ����ϴ�.\n", money);
			break;
		}
		else {
			system("cls");
			printf("���̵� ��ȣ�� Ʋ�Ƚ��ϴ�\n");
		}
	}
}
