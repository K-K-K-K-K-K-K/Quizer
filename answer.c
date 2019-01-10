#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int a;
	void Answer();
	a=4;
	Answer(a);
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
	}
	else printf("不正解\n");
	printf("time = %d[s]\n",(int)(t2-t1));

}
