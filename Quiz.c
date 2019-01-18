#define CNT_INITL 0

#include <stdio.h>
#include "QAUnit.h"
#include "AnsProc.h"

int cnt = CNT_INITL;

void initQuiz() {
	cnt = CNT_INITL;
}

void quiz(QA qa) {
	printf("[第%d問]\n", ++cnt);

	printf("    <問題>\n");
	printf("        %s\n", qa.q);
	printf("\n");

	printf("    <解答群>\n");
	for (int i = 0; i < qa.ansArrLen; i++)
		printf("        %d: %s\n", i + 1, qa.a[i]);
	printf("\n");

	printf("    >> ");

	// 解答部呼出
	ansProc(qa.crtAnsIdx + 1);
}

