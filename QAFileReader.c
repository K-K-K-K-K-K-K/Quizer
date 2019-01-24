#include <stdio.h>
#include <string.h>
#include "QAFileReader.h"

QA cvtQAStruct(char *line);

void readQAFile(char *name) {
	char path[STRSIZE];
	sprintf(path,"%s%s%s","QAdata/", name, ".qa");
	FILE *fp;
	fp = fopen(path, "r");

	char ch = fgetc(fp);
	for(int i = 0; ch != EOF; i++){
		char line[STRSIZE];
		strcpy(line,"");

		while(ch != '\n' && ch != EOF) { //一行読み込む
			sprintf(line,"%s%c",line,ch);
			ch = fgetc(fp);
		}
		ch = fgetc(fp); // 改行 | EOF読み飛ばし

		qas[i] = cvtQAStruct(line);
	}
}

// 文字列を分解し、QA構造体の変数に代入し、返却する函数
QA cvtQAStruct(char *line) {
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

void testRunnner() {
	// cvtQAStructのテスト
/*	char *s = "「咫尺」の読みは?:しせき|!かしょく|がいかく";

	QA qa = cvtQAStruct(s);

	printf("qa.q: %s\n", qa.q);
	printf("qa.crtAnsIdx: %d\n", qa.crtAnsIdx);
	printf("qa.crtArrLen: %d\
	getQAs("漢字");n", qa.ansArrLen);

	for (int i = 0; i < qa.ansArrLen; i++)
		printf("%d: %s\n", i, qa.a[i]);
	printf("\n");
*/


	// getQAsの試験
	readQAFile("歴史");
	for (int i = 0; i < 27; i++) {
		QA qa = qas[i];

		printf("qa.q: %s\n", qa.q);
		printf("qa.crtAnsIdx: %d\n", qa.crtAnsIdx);
		printf("qa.crtArrLen: %d\n", qa.ansArrLen);

		for (int i = 0; i < qa.ansArrLen; i++)
			printf("%d: %s\n", i, qa.a[i]);
		printf("\n");
		printf("\n");
		printf("\n");
	}
}

