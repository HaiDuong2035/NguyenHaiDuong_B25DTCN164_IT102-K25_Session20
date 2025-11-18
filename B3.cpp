#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct {
	char name[50];
	int age;
	char phoneNumber[20];
} student;
int main(){
	student arr[5];
	for (int i=0; i<5; i++){
		printf("\nSinh vien %d",i+1);
		printf("\nNhap ten: ");
		scanf(" %[^\n]",arr[i].name);
		printf("Nhap tuoi: ");
		scanf("%d",&arr[i].age);
		printf("Nhap so dien thoai: ");
		scanf(" %[^\n]",arr[i].phoneNumber);
	}
	printf("\nThong tin sinh vien\n");
	for (int i=0; i<5; i++){
		printf("\nSinh vien %d",i+1);
		printf("\nTen: %s",arr[i].name);
		printf("\nTuoi: %d",arr[i].age);
		printf("\nSo dien thoai: %s\n",arr[i].phoneNumber);
	}
}
