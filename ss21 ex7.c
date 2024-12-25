#include<stdio.h>
#include<string.h>
struct sinhVien{
	char id[50];
	char name[50];
	int age;
};
int main(){
	int quantity;
	printf("Moi ban nhap so luong sinh vien : ");
	scanf("%d",&quantity);
	getchar();
	struct sinhVien sv[quantity];
	for(int i=0;i<quantity;i++){
		printf("Moi ban nhap id : ");
		fgets(sv[i].id,50,stdin);
		printf("Moi ban nhap ten cua %s : ",sv[i].id);
		fgets(sv[i].name,50,stdin);
		printf("Moi ban nhap tuoi cua %s : ",sv[i].id);
		scanf("%d", &sv[i].age);
		getchar();
	}
	FILE *file=fopen("students.txt","w");
	for(int i=0;i<quantity;i++){
		fprintf(file,"\t%s",sv[i].id);
		fprintf(file,"%s",sv[i].name);
		fprintf(file,"\t%d\n",sv[i].age);
	}
	fclose(file);
	return 0;
}
