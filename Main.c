#include <stdio.h>
#include <stdlib.h>
#include <errorno.h>
#include "Quiz.h"

void printStartMsg();
void printHelpMsg();
void mrymryhrhrhrhr();

void main() {
	printStartMsg();
	printHelpMsg();

	int sel;
	for (;;) {
		printf("> ");
		
		char cmd[100];
		scanf("%s", cmd);
		sel = strtol(cmd, null, 10);
		if (!isdigit(sel)) {
			printf("[エラー] 不正な入力\n");
			continue;
		}

		switch(sel) {
			case 1:
				exit(0);
				break;

			case 2:
				printHelpMsg();
				break;

			case 3:
				printf("KANJI\n");
				printf("\n");
				break;

			case 364364:
				mrymryhrhrhrhr();
				printf("\n");
				break;

			default:
				printf("[エラー] 不正な入力\n");
				printf("\n");
		}
	}
}

void printStartMsg() {
	printf("Quizer 第0.1版\n");
	printf("\n");
}

void printHelpMsg() {
	printf("コマンド一覧表\n");
	printf("    1: 終了\n");
	printf("    2: コマンド一覧表の表示\n");
	printf("    3: [Quiz] 漢字の読み方\n");
	printf("    \n");
}

void mrymryhrhrhrhr() {
	char q[] = "わかる？突っ込め。突っ込めって言ってんの、ね？突っ込めって言ってんだよォ！";
	char *a[] = {
		"右向くんだよ90度",
		"エンジン全開！",
		"こ↑こ↓（到着）"
	};
	quiz(q, 3, a, 1);
}

