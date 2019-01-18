#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void ansProc(int crtAnsIdx);

int test() {
	int cai = 4;
	ansProc(cai);
}

void initAnsProc() {
	// 初期化
}

void ansProc(int crtAnsNum) {
	time_t t1 = time(NULL);
	
	int ans;
	scanf("%d", &ans);
	
	time_t t2 = time(NULL);
	
	printf("\n");
	if(crtAnsNum == ans)
		printf("    正解\n");
	else
		printf("    不正解\n");

	printf("\n    経過時間:  %d [秒]\n",(int)(t2-t1));
}

