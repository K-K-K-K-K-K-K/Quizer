#include <stdio.h>

#define CNT_INITL 0

int cnt = CNT_INITL;

void rstCnt() {
	cnt = CNT_INITL;
}

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


