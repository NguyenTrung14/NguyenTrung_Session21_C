#include<stdio.h>
int main(){
	char text[1000];
	FILE *fptr;
	fptr=fopen("bt01.txt","r");
	fgets(text,1000,fptr);
	printf("Dong 1 cua file la : %s",text);
	fclose(fptr);
	return 0;
}
