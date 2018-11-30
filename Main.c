#include <stdio.h>
#include <stdlib.h>

void main() {
	int sel;
	scanf("%d", &sel);

	switch(sel) {
		case 1:
			exit(0);
			break;

		default:
			printf("[エラー] 不正な入力\n");
	}

	main();
}

