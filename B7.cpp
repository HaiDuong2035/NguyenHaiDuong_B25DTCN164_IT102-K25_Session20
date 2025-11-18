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
	int find, size=5;
	struct student a[50]={
		{1,"Nguyen Van A",18,"0987654321"},
		{2,"Nguyen Van B",18,"0987654322"},
		{3,"Nguyen Van C",18,"0987654323"},
		{4,"Nguyen Van D",18,"0987654324"},
		{5,"Nguyen Van E",18,"0987654325"}
	};
	do {
		printf("Nhap id sinh vien can xoa: ");
		scanf("%d",&find);
		if (find>0 && find <6){
			for (int i=find-1; i<size-1; i++){
				a[i]=a[i+1];
			}
			size--;
		} else {
			printf("Nhap lai\n");
		}
	} while (find<1 || find>5);
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
