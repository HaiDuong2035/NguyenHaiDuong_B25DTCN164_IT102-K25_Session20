#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
struct student {
	int id;
	char name[50];
	int age;
	char phoneNumber [20];
};
int main(){
	int find, choice;
	struct student a[50]={
		{1,"Nguyen Van A",18,"0987654321"},
		{2,"Nguyen Van B",18,"0987654322"},
		{3,"Nguyen Van C",18,"0987654323"},
		{4,"Nguyen Van D",18,"0987654324"},
		{5,"Nguyen Van E",18,"0987654325"}
	};
	while (1) {
		printf("Muon sua thong tin sinh vien khong? (1: co, 2: khong): ");
		scanf("%d",&choice);
		if (choice==1){
			printf("Nhap id sinh vien muon sua: ");
			scanf("%d",&find);
			if (find<1 || find>5){
				printf("Id khong ton tai\n");
			} else {
				printf("Ten moi: ");
				scanf(" %[^\n]",a[find-1].name);
				printf("Tuoi moi: ");
				scanf(" %d",&a[find-1].age);
				printf("Cap nhat thanh cong\n");
			}
		} else if (choice==2){
			printf("Danh sach sinh vien");
			break;
		} else {
			printf("Nhap lai\n");
		}
	}
	for (int i=0; i<5; i++){
		printf("\nSinh vien %d",i+1);
		printf("\nId: %d",a[i].id);
		printf("\nTen: %s",a[i].name);
		printf("\nTuoi: %d",a[i].age);
		printf("\nSo dien thoai: %s",a[i].phoneNumber);
	}
}
