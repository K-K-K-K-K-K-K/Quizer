#include <stdio.h>

int main(void){
	char ch;
	FILE *fp;
	
	fp = fopen("test.txt", "r");

/* ファイルが適切に読み込まれているかの確認 */
	if( fp == NULL ){
		perror("ファイルの読み込みに失敗\n");
		return 1;
	}

/* テキストの読み込み&出力 */
	printf("▼===== Questions =====▼\n");
	while(( ch = fgetc(fp) ) != EOF ){
		printf("%c",ch);
	}
	
	fclose(fp); 
	return 0;
}
