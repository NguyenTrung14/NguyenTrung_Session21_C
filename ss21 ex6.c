#include<stdio.h>

int main(){
	FILE *file1, *file2;
	char kyTu;
	file1=fopen("bt01.txt","r");
	file2=fopen("bt06.txt","w");
	while ((kyTu = fgetc(file1)) != EOF) {
        fputc(kyTu, file2);
    }
	return 0;
}
