#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

int cnt;
struct account {
	char name[20]; //�̸�
	char id[10]; //ID
	int passwd; //��ȣ(���ڷ�)
	char address[100]; //�ּ�
	char phone[13]; //��ȭ��ȣ
	long  balance; //�ܰ�
}; typedef struct account ACCOUNT;


int mainmenu();
void mouse(ACCOUNT *acc, int i);
void Print(ACCOUNT *acc, int cnt);
void deposit(ACCOUNT *acc, int cnt);
void withdraw(ACCOUNT *acc, int cnt);