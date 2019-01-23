#include <stdio.h>
#include <string.h>
#include "Quiz.h"

void main() {
	for (int i = 0; i < 2; i++) {
		initQuiz();
		for (int j = 0; j < 3; j++) {
			QA qa;
			strcpy(qa.q, "問題文");
			strcpy(qa.a[0], "回答1");
			strcpy(qa.a[1], "回答2");
			strcpy(qa.a[2], "回答3");
			qa.ansArrLen = 3;
			qa.crtAnsIdx = 3;
			quiz(qa);
		}
	}
}

