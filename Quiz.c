#define CNT_INITL 0

#include <stdio.h>
#include "QAUnit.h"

int cnt = CNT_INITL;

void rstCnt() {
	cnt = CNT_INITL;
}

/*
void quiz(char *q, int ansArrLen, char *a[], int crtAnsNum) {
	printf("[第%d問]\n", ++cnt);

	printf("    <問題>\n");
	printf("        %s\n", q);
	printf("\n");

	printf("    <解答群>\n");
	for (int i = 0; i < ansArrLen; i++)
		printf("        %d: %s\n", i + 1, a[i]);
	printf("\n");

	printf("    >> ");
	int sel;
	scanf("%d", &sel);

	if (sel == crtAnsNum)
		printf("正答\n");
	else
		printf("誤答\n");
}
*/

void quiz(QA *qa) {
	printf("[第%d問]\n", ++cnt);

	printf("    <問題>\n");
	printf("        %s\n", qa->q);
	printf("\n");

	printf("    <解答群>\n");
	for (int i = 0; i < qa->ansArrLen; i++)
		printf("        %d: %s\n", i + 1, qa->a[i]);
	printf("\n");

	printf("    >> ");
	int sel;
	scanf("%d", &sel);

	// 解答部呼出
	// 仮: (
	if (sel == qa->crtAnsNum)
		printf("正答\n");
	else
		printf("誤答\n");
	// )
}


