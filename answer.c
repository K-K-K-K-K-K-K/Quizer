#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <float.h>
int  n,c,p,t=0,n_c=0,n_u=0;
float tt;
int main(){
	int a;
	
	scanf("%d %d",&n,&c);
	void Answer();
	void Result();
	a=4;
	for(int i=0;i<n;i++){
		Answer(a);
	}
	Result();
	
}

void Answer(int q){
	int answer;
	time_t t1,t2;
	t1 = time(NULL);
	printf("回答を入力してください\n");
	
	scanf("%d",&answer);
	
	printf("%d %d \n",q,answer);
	t2 = time(NULL);
	if(q==answer){
		printf("正解\n");
		n_c++;
	}
	else {
		printf("不正解\n");
		n_u++;
	}
	printf("time = %d[s]\n",(int)(t2-t1));
	t = t+ (int)(t2-t1);
	printf("%d\n",t);

}

void Result(){
	p = 100*n_c/n;
	tt = (double)t/(double)n;
	printf("正答率は%d %%です\n",p);
	printf("1問あたりの時間はおよそ%.1f秒です\n",tt);
	
}
