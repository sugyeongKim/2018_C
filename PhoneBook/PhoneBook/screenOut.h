#pragma once
/* Name: screenOut.h  ver 1.1
 * Content: �ܼ� ����� ���� �Լ� ����
 * Implementation: YSW
 *
 * Last modified 2008/01/01
 */

#ifndef __SCREENOUT_H__
#define __SCREENOUT_H__

#include "phoneData.h"

void ShowMenu(void);
void ShowPhoneInfo(phoneData phone);
void ShowPhoneInfoByPtr(phoneData * pPhone);

#endif

/* end of file */