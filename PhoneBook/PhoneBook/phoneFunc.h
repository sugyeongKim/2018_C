#pragma once
#pragma once
/* Name: phoneFunc.h  ver 1.3
 * Content: ��ȭ��ȣ ��Ʈ�� �Լ� ����.
 * Implementation: YSW
 *
 * Last modified 2008/01/01
 */
#ifndef __PHONEFUNC_H__
#define __PHONEFUNC_H__

#include "phoneData.h"

void InputPhoneData(void);
void ShowAllData(void);
void SearchPhoneData(void);
void DeletePhoneData(void);
void ChangePhoneData(void);

void StoreDataToFile(void);
void LoadDataFromFile(void);
void StoreDataFile();
void LordDataFile();

#endif

/* end of file */