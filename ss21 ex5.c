#include<stdio.h>

int main(){
	int dong;
	printf("Moi ban nhap so dong : ");
	scanf("%d", &dong);
	getchar();
	char text[dong][100];
	for(int i=0;i<dong;i++){
		printf("Moi ban nhap noi dung dong thu %d : ",i+1);
		fgets(text[i],100,stdin);
	}
	FILE *file=fopen("bt05.txt","w");
	for(int i=0;i<dong;i++){
		fprintf(file,"%s",text[i]);
	}
	fclose(file);
	return 0;
}
