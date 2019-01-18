#include <stdio.h>
#include <string.h>
#include "QAUnit.h"

getQA(char *line);

QA *getQAs(char *path) {
	QA qas[PSIZE];
	
	FILE *fp;
	//for (ファイルの終わりまで) {
		 //一行読み込む
		qas[i] = getQA(line);
	//}

	return qas;
}

// 文字列を分解し、QA構造体の変数に代入し、返却する函数
QA getQA(char *line) {
	// 「咫尺」の読みは?:しせき|!かしょく|がいかく
	QA qa;

	// :が来るまで読込み、qa.qにstrcpy
	strcpy(qa.q, "わかる？突っ込め。突っ込めって言ってんの、ね？突っ込めって言ってんだよォ！");

	int i;
	// 反復 for (i = 0; ) {
		// もし最初に!がある
			qa.crtAnsIdx = i;
		//
		

		// |がくる
			strcpy(qa.a[i], "文字列");
		// 
	//
	
	// 反復回数を代入
	qa.ansArrLen = i;

	return qa;
}

void main(int argc, char **argv) {
	QA qa = getQA(argv[0]);
}

