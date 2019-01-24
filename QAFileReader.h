#ifndef QAFR_H
#define QAFR_H

#include "QAUnit.h"

QA qas[PSIZE];
extern QA qas[PSIZE];

void readQAFile(char *name);
QA cvtQAStruct(char *line);

#endif

