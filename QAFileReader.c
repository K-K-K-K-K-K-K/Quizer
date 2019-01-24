#include <stdio.h>
#include <string.h>
#include "QAUnit.h"

QA qas[PSIZE];

QA getQA(char *line);

QA *getQAs(char *path, int readSize) {
	char ch;
	FILE *fp;
	sprintf(path,"%s%s%s","QAdata/",path, ".qa");
	fp = fopen(path, "r");
	for(int i=0;i < readSize;i++){
		char *line;
		strcpy(line,"");
		while( ( ch = fgetc(fp)) != '\n'){ //一行読み込む
			sprintf(line,"%s%c",line,ch);	
			qas[i] = getQA(line);
		}
	}
	return qas;
}

// 文字列を分解し、QA構造体の変数に代入し、返却する函数
QA getQA(char *line) {
	// 「咫尺」の読みは?:しせき|!かしょく|がいかく
	QA qa;
	strcpy(qa.q,"");
	for (int i = 0; i < ASIZE; i++)
		strcpy(qa.a[i], "");
	int i;

	for(i=0;line[i]!=':';i++){// :が来るまで読込み、qa.qにstrcpy
		sprintf(qa.q, "%s%c",qa.q,line[i]);
	}
	i++;

	int j;
	for(j = 0; line[i] != '\0'; j++) {
		// もし最初に!がある
		if (line[i] == '!'){
			qa.crtAnsIdx = j;
			i++;
		}

		//|が来るまで読込み、qa.qに代入
		for (; line[i] != '|' ; i++) {
			sprintf(qa.a[j], "%s%c",qa.a[j],line[i]);
			if(line[i] == '\0') {
				goto out;
			}
		}
		i++;
	}
	out:

	// 反復回数を代入
	qa.ansArrLen = j + 1;

	return qa;
}

void main(int argc, char **argv) {
	char *s = "「咫尺」の読みは?:しせき|!かしょく|がいかく";

	QA qa = getQA(s);

	printf("qa.q: %s\n", qa.q);
	printf("qa.crtAnsIdx: %d\n", qa.crtAnsIdx);
	printf("qa.crtArrLen: %d\n", qa.ansArrLen);

	for (int i = 0; i < qa.ansArrLen; i++)
		printf("%d: %s\n", i, qa.a[i]);
	printf("\n");
}

