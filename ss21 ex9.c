#include<stdio.h>
#include<string.h>
typedef struct{
	char bookCode[100];
	char bookTitle[1000];
	char author[100];
	char value[1000];
	char category[1000];
}books;
int main(){
	char text[10000];
	FILE *file;
	books b[100];
	int quantity;
	int select;
	do{
		printf("\n \n \tMENU \n1. Nhap so luong va thong tin sach \n2. Luu thong tin sach vao file \n3. Lay thong tin sach tu file \n4. Hien thi thong tin sach \n5. Thoat \n");
		printf("Moi ban nhap lua chon : ");
		scanf("%d",&select);
		getchar(); 
		printf("Moi ban nhap so luong sach : ");
		scanf("%d",&quantity);
		getchar();
		for(int i=0;i<quantity;i++){
			printf("Moi ban nhap ma sach thu %d : ",i+1);
			fgets(b[i].bookCode,100,stdin);
			printf("Moi ban nhap ten sach thu %d : ",i+1);
			fgets(b[i].bookTitle,1000,stdin);
			printf("Moi ban nhap ten tac gia cua sach thu %d : ",i+1);
			fgets(b[i].author,100,stdin);
			printf("Moi ban nhap gia tien cua sach thu %d : ",i+1);
			fgets(b[i].value,1000,stdin);
			printf("Moi ban nhap the loai cua sach thu %d : ",i+1);
			fgets(b[i].category,1000,stdin);
		}
		switch(select){
			case 1:
				continue;
			case 2:
				file=fopen("Books.bin","wb");
				for(int i=0;i<quantity;i++){
					fwrite(&b[i].bookCode,sizeof(char),40,file);
					fwrite(&b[i].bookTitle,sizeof(char),40,file);
					fwrite(&b[i].author,sizeof(char),40,file);
					fwrite(&b[i].value,sizeof(char),40,file);
					fwrite(&b[i].category,sizeof(char),40,file);
				}
				fclose(file);
				break;
			case 3:
				file=fopen("Books.bin","rb");
				if(file==NULL){
					printf("File khong ton tai !");
					break;
				}
				quantity = fread(b, sizeof(books), 100, file);
				fclose(file);
				break;
			case 4:
				if(quantity == 0){
                    printf("Chua co thong tin sach nao!\n");
                } else{
                    for(int i = 0; i < quantity; i++) {
                        printf("\nSach thu %d:\n", i + 1);
                        printf("Ma sach: %s\n", b[i].bookCode);
                        printf("Ten sach: %s\n", b[i].bookTitle);
                        printf("Tac gia: %s\n", b[i].author);
                        printf("Gia tien: %s\n", b[i].value);
                        printf("The loai: %s\n", b[i].category);
                    }
                }
                break;
			case 5:
				break;
			default:
				printf("Lua chon khong hop le !");
		}
	} while(select!=5);
	return 0;
}
