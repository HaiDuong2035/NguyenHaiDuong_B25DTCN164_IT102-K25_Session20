#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
struct student {
	char name[50], phoneNumber[20];
	int id, age;
};
int main(){
	struct student arr[50];
	printf("Nhap thong tin sinh vien\n");
	for (int i=0; i<5; i++){
		printf("Sinh vien %d\n",i+1);
		arr[i].id=i+1;
		printf("Ten: ");
		scanf(" %[^\n]",arr[i].name);
		printf("Tuoi: ");
		scanf("%d",&arr[i].age);
		printf("So dien thoai: ");
		scanf(" %[^\n]",arr[i].phoneNumber);
	}
	printf("Danh sach sinh vien\n");
	for (int i=0; i<5; i++){
		printf("Sinh vien %d\n",i+1);
		printf("Id: %d\n",arr[i].id);
		printf("Ten: %s\n",arr[i].name);
		printf("Tuoi: %d\n",arr[i].age);
		printf("So dien thoai: %s\n",arr[i].phoneNumber);
	}
}
