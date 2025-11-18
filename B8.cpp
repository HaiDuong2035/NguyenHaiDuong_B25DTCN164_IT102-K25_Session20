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
	int size=5, pos;
	struct student a[50]={
		{1,"Nguyen Van A",18,"0987654321"},
		{2,"Nguyen Van B",18,"0987654322"},
		{3,"Nguyen Van C",18,"0987654323"},
		{4,"Nguyen Van D",18,"0987654324"},
		{5,"Nguyen Van E",18,"0987654325"}
	};
	while (1){
		printf("Nhap vi tri can chen: ");
		scanf("%d",&pos);
		if (pos>=0 && pos<=size){
			size++;
			break;
		} else {
			printf("Nhap lai\n");
		}
	}
	for (int i=size-1; i>pos-1; i--){
		a[i]=a[i-1];
	}
	printf("Nhap thong tin sinh vien moi");
	printf("\nTen: ");
	scanf(" %[^\n]",a[pos-1].name);
	printf("Tuoi: ");
	scanf(" %d",&a[pos-1].age);
	printf("So dien thoai: ");
	scanf(" %[^\n]",a[pos-1].phoneNumber);
	for (int i=0; i<size; i++){
		a[i].id=i+1;
	}
	for (int i=0; i<size; i++){
		printf("\nSinh vien %d",i+1);
		printf("\nId: %d",a[i].id);
		printf("\nTen: %s",a[i].name);
		printf("\nTuoi: %d",a[i].age);
		printf("\nSo dien thoai: %s",a[i].phoneNumber);
	}
}
