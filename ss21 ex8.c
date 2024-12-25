#include<stdio.h>
#include<string.h>
struct sinhVien{
	char id[50];
	char name[50];
	int age;
};
int main(){
	struct sinhVien sv[100];
	char text[100][100];
	FILE *file=fopen("students.txt","r");
	for(int i=0;i<101;i++){
		fgets(text[i],100,file);
		printf("%s",text[i]);
		if(text[i]==NULL){
			return 1;
		}
	}
	fclose(file);
	return 0;
}
