#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

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

	int ans;
	time_t t1 = time(NULL);

	char sel[1000];
	for (;;) {
		scanf("%s", sel);

		if(sel[0] >= 48 && sel[0] <= 57){
			ans = sel[0] - '0';
			break;
		}

		printf("\n    [エラー]: 不正な入力\n");
		printf("    >> ");
	}
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
	printf("\n");
	printf("\n");
}

void ansFinProc() {
	printf("    正答率: %d [%%]\n", 100 * crt / pcnt);
	printf("    平均回答時間: %.1f [秒]\n", (double) tcnt / (double) pcnt);
}

