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
	struct student a[50]={
		{1,"Nguyen Van A",18,"0987654321"},
		{2,"Nguyen Van B",18,"0987654322"},
		{3,"Nguyen Van C",18,"0987654323"},
		{4,"Nguyen Van D",18,"0987654324"},
		{5,"Nguyen Van E",18,"0987654325"}
	};
	printf("Nhap thong tin sinh vien 6\n");
	a[5].id=6;
	printf("Ten: ");
	scanf(" %[^\n]",a[5].name);
	printf("Tuoi: ");
	scanf(" %d",&a[5].age);
	printf("So dien thoai: ");
	scanf(" %[^\n]",a[5].phoneNumber);
	for (int i=0; i<6; i++){
		printf("\nSinh vien %d",i+1);
		printf("\nId: %d",a[i].id);
		printf("\nTen: %s",a[i].name);
		printf("\nTuoi: %d",a[i].age);
		printf("\nSo dien thoai: %s",a[i].phoneNumber);
	}
}
