#pragma once
#include <stdio.h>
#include <string.h>
#include "Student.h"
int ReadData(FILE *fp, STUDENT *std);
int WriteData(FILE *fp, STUDENT *std);