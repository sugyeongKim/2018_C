#pragma warning(disable:4996)
#include "common.h"
#include "screenOut.h"
#include "phoneFunc.h"

enum { INPUT = 1, SHOWALL, SEARCH, DELETE, CHANGE, QUIT };
int people = 0;


int main() {
	int inputMenu = 0;
	LordDataFile();
	while (1) {
		ShowMenu();
		fputs("�����ϼ���  : ", stdout);
		scanf("%d", &inputMenu);
		fflush(stdin);
		switch (inputMenu) {
		case INPUT:
			InputPhoneData();	break;
		case SHOWALL:
			ShowAllData();	break;
		case SEARCH:
			SearchPhoneData();		break;
		case CHANGE:
			ChangePhoneData();
			break;
		case DELETE:
			DeletePhoneData();		break;
		}

		if (inputMenu == QUIT) {
			StoreDataFile();
			puts("�̿����ּż� �����մϴ�");
			break;
		}
	}

}
