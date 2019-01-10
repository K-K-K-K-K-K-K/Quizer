#ifndef QA_H
#define QA_H

typedef struct {
	char *q; // 問題文
	int crtAnsNum; // 正答の番号
	int ansArrLen; // 解答数
	char** a; // 解答文の配列
} QA;

#define ASIZE 1000

#endif

