#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include"head.h"
void gotoxy(int x, int y);


#define HEADLEFT 20
#define LEFT 10
#define MEMBER 5


int main() {
	cnt = 0;
	int i = 0;
	ACCOUNT *acc = NULL;
	acc = malloc(sizeof(ACCOUNT)*MEMBER);
	while (1) {
		int choice = mainmenu();

		if (choice == 1) {
			mouse(acc, i);
			cnt++;
			i++;
			system("cls");
		}

		else if (choice == 2) {
			Print(acc, cnt);
			system("PAUSE");
			system("cls");
		}
		else if (choice == 3) {
			deposit(acc, cnt);
			system("PAUSE");
			system("cls");
		}

		else if (choice == 4) {
			withdraw(acc, cnt);
			system("PAUSE");
			system("cls");
		}

		else if (choice == 0) {
			return 0;
		}
	}
}

int mainmenu() {

	int x, y;
	x = HEADLEFT, y = 1;
	gotoxy(x, y);
	printf("[은행 관리 시스템]");

	x = LEFT, y += 2;
	gotoxy(x, y); printf("[1] 계좌 개설");
	y++; gotoxy(x, y); printf("[2] 계좌 조회");
	y++; gotoxy(x, y); printf("[3] 입금");
	y++; gotoxy(x, y); printf("[4] 출금");
	y += 2; gotoxy(x, y); printf("[0] 종료");

	x = HEADLEFT; y += 2;
	gotoxy(x, y); printf("<메뉴선택> ___");

	int menu;
	gotoxy(x + 12, y); scanf("%d", &menu);
	if (4 < menu || menu < 0)
		mainmenu();
	return menu;
}