#pragma once
#pragma once
/* Menu.h */
#ifndef MENU_h
#define MENU_H

#define ADD_STUDENT  1
#define LIST_BY_AVE  2
#define LIST_BY_NAME 3

#define PRINT_STUDENT 4
#define FIND_STUDENT 5
#define QUIT_PROGRAM 0

#define MODIFY_STUDENT 1
#define DELETE_STUDENT 2
#define PREVIOUS_MENU 0

int SelectMenu(void);
int SelectFindMenu(void);
extern person;

#endif
