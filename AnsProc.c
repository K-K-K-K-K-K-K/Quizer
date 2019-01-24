#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int pcnt; // 現在の問題数
int crt; // 正解数
int tcnt; // 経過時間
void ansProc(int crtAnsIdx);
void ansFinProc();

int test() {
	for (int i = 0; i < 10; i++)
		ansProc(4);
	ansFinProc();
}

void initAnsProc() {
	pcnt = 0;
	crt = 0;
	tcnt = 0;
}

void ansProc(int crtAnsNum) {
	pcnt++;

	time_t t1 = time(NULL);
	
	int ans;
	scanf("%d", &ans);
	
	time_t t2 = time(NULL);

	printf("\n");
	if(crtAnsNum == ans) {
		printf("    正解\n");
		crt++;
	} else {
		printf("    不正解\n");
	}

	int td = (int) (t2 - t1);
	tcnt += td;
	printf("\n    経過時間:  %d [秒]\n",tcnt);
}

void ansFinProc() {
	printf("    正答率: %d [%]\n", 100 * crt / pcnt);
	printf("    平均回答時間: %.1f [秒]\n", (double) tcnt / (double) pcnt);
}

