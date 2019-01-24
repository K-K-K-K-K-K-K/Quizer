#ifndef QAUnit_H
#define QAUnit_H

#define PSIZE 100
#define ASIZE 20
#define STRSIZE 200

typedef struct {
	char q[STRSIZE]; // 問題文
	char a[ASIZE][STRSIZE]; // 解答文の配列
	int ansArrLen; // 解答数
	int crtAnsIdx; // 正答の番号
} QA;

#endif

