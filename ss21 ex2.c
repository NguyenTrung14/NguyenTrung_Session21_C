#include<stdio.h>
int main(){
	char firstWord;
	FILE *fptr;
	fptr=fopen("bt01.txt","r");
	firstWord=fgetc(fptr);
	printf("Ki tu dau tien cua file la : %c",firstWord);
	fclose(fptr);
	return 0;
}
