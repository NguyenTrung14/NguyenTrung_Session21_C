#include<stdio.h>
int main(){
	char text[100];
	fgets(text,100,stdin);
	FILE *fptr;
	fptr=fopen("bt01.txt","w");
	fprintf(fptr,"%s",text);
	fclose(fptr);
	return 0;
}
