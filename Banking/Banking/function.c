#include"head.h"

void gotoxy(int x, int y) {
	COORD position = { 0,0 };
	position.X = x;
	position.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void mouse(ACCOUNT *acc, int i) {
	system("cls");
	printf("[1] 계좌 개설\n\n");
	printf("입력 후 Enter 키를 누르세요.\n\n");
	printf("이름 : "); scanf("%s", acc[i].name);
	printf("ID : "); scanf("%s", acc[i].id);
	printf("암호 : "); scanf("%d", &acc[i].passwd);
	printf("주소 : "); scanf("%s", acc[i].address);
	printf("전화번호 : "); scanf("%s", acc[i].phone);
	printf("입금액 : "); scanf("%d", &acc[i].balance);

}

void Print(ACCOUNT *acc, int cnt) {
	char ID[10];
	int PASS;
	system("cls");
	printf("[2] 계좌 조회\n\n");
	printf("입력 후 Enter 키를 누르세요.\n\n");
	printf("ID : "); scanf("%s", &ID);
	printf("암호 : "); scanf("%d", &PASS);

	for (int i = 0; i < cnt; i++) {
		if (strcmp(ID, acc[i].id) == 0 && (PASS == acc[i].passwd)) {
			system("cls");
			printf("[2] 계좌 조회 결과\n\n");
			printf("이름 : %s \t 잔고 : %d\n", acc[i].name, acc[i].balance);
			printf("ID : %s \t 암호 : %d\n", acc[i].id, acc[i].passwd);
			printf("전화번호  %s\n", acc[i].phone);
			printf("주소 :  %s\n", acc[i].address);
			break;
		}
		else {
			printf("틀렸습니다\n");
		}
	}
}

void deposit(ACCOUNT *acc, int cnt) {
	char ID[10];
	int PASS;
	long money;
	system("cls");
	printf("[3] 입금 \n");
	printf("\n입력 후 Enter 키를 누르세요.\n");
	printf("ID : "); scanf("%s", &ID);
	printf("암호 : "); scanf("%d", &PASS);
	printf("입금액 : "); scanf("%ld", &money);

	for (int i = 0; i < cnt; i++) {
		if (strcmp(ID, acc[i].id) == 0 && (PASS == acc[i].passwd)) {
			acc[i].balance += money;
			system("cls");
			printf("[3] 입금 \n");
			printf("\n입력 후 Enter 키를 누르세요.\n");
			printf("ID : %s\n", acc[i].id);
			printf("암호 : %d\n", acc[i].passwd);
			printf("입금액 : %d\n", money);
			printf("입금 성공 : 금액 %d원이 입금되었습니다.\n", money);
			break;
		}
		else {
			system("cls");
			printf("아이디나 암호가 틀렸습니다\n");
		}
	}
}

void withdraw(ACCOUNT *acc, int cnt) {
	char ID[10];
	int PASS;
	long money;
	system("cls");
	printf("[4] 출금 \n");
	printf("\n입력 후 Enter 키를 누르세요.\n");
	printf("ID : "); scanf("%s", &ID);
	printf("암호 : "); scanf("%d", &PASS);
	printf("출금액 : "); scanf("%ld", &money);

	for (int i = 0; i < cnt; i++) {
		if (strcmp(ID, acc[i].id) == 0 && (PASS == acc[i].passwd)) {
			if (acc[i].balance >= money)
				acc[i].balance -= money;
			system("cls");
			printf("[4] 출금 \n");
			printf("\n입력 후 Enter 키를 누르세요.\n");
			printf("ID : %s\n", acc[i].id);
			printf("암호 : %d\n", acc[i].passwd);
			printf("출금액 : %d\n", money);
			printf("출금 성공 : 금액 %d원이 출금되었습니다.\n", money);
			break;
		}
		else {
			system("cls");
			printf("아이디나 암호가 틀렸습니다\n");
		}
	}
}
