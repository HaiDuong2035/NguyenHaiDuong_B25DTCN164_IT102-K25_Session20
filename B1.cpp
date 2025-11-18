#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
struct student{
	char name[50];
	int age;
	char phoneNumber[12];
};
int main(){
	struct student student1 = {"Nguyen Van A", 18, "1234567890"};
	printf("Ten: %s\n", student1.name);
	printf("Tuoi: %d\n",student1.age);
	printf("So dien thoai: %s\n",student1.phoneNumber);
}
