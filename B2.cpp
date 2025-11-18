#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
struct student {
	char name[50];
	int age;
	char phoneNumber[12];
};
int main() {
	struct student std1;
	printf("Nhap ten: ");
	scanf(" %[^\n]", std1.name);
	printf("Nhap tuoi: ");
	scanf("%d", &std1.age);
	printf("Nhap so dien thoai: ");
	scanf(" %[^\n]", std1.phoneNumber);
	printf("Ten: %s\n", std1.name);
	printf("Tuoi: %d\n", std1.age);
	printf("So dien thoai: %s\n", std1.phoneNumber);
}
