#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct {
    int id;
    char name[50];
    float price;
} Dish;
void printMenu(Dish menu[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d. ID: %d - Name: %s - Price: %.2f\n",
               i, menu[i].id, menu[i].name, menu[i].price);
    }
}
void insertDish(Dish menu[], int *size) {
    int pos;
    Dish newDish;
    printf("Nhap vi tri can chen (0 - %d): ", *size);
    scanf("%d", &pos);
    if (pos < 0 || pos > *size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    printf("Nhap ID: ");
    scanf("%d", &newDish.id);
    printf("Nhap ten mon: ");
    scanf(" %[^\n]", newDish.name);
    printf("Nhap gia: ");
    scanf("%f", &newDish.price);
    for (int i = *size; i > pos; i--) {
        menu[i] = menu[i - 1];
    }
    menu[pos] = newDish;
    (*size)++;
    printf("Them mon thanh cong!\n");
}
void editDish(Dish menu[], int size) {
    int pos;
    printf("Nhap vi tri can sua (0 - %d): ", size - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    printf("Nhap ID moi: ");
    scanf("%d", &menu[pos].id);
    printf("Nhap ten moi: ");
    scanf(" %[^\n]", menu[pos].name);
    printf("Nhap gia moi: ");
    scanf("%f", &menu[pos].price);
    printf("Sua thanh cong!\n");
}
void deleteDish(Dish menu[], int *size) {
    int pos;
    printf("Nhap vi tri can xoa (0 - %d): ", *size - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= *size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = pos; i < *size - 1; i++) {
        menu[i] = menu[i + 1];
    }
    (*size)--;
    printf("Xoa thanh cong!\n");
}
void sortAscending(Dish menu[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (menu[i].price > menu[j].price) {
                Dish temp = menu[i];
                menu[i] = menu[j];
                menu[j] = temp;
            }
        }
    }
    printf("Sap xep tang dan thanh cong!\n");
}
void sortDescending(Dish menu[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (menu[i].price < menu[j].price) {
                Dish temp = menu[i];
                menu[i] = menu[j];
                menu[j] = temp;
            }
        }
    }
    printf("Sap xep giam dan thanh cong!\n");
}
void linearSearch(Dish menu[], int size) {
    char key[50];
    printf("Nhap ten mon can tim: ");
    scanf(" %[^\n]", key);
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(menu[i].name, key) == 0) {
            printf("Tim thay tai vi tri %d: ID=%d, Name=%s, Price=%.2f\n",
                   i, menu[i].id, menu[i].name, menu[i].price);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay mon an!\n");
    }
}
void binarySearch(Dish menu[], int size) {
    char key[50];
    printf("Nhap ten mon can tim: ");
    scanf(" %[^\n]", key);
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        int cmp = strcmp(menu[mid].name, key);
        if (cmp == 0) {
            printf("Tim thay tai vi tri %d: ID=%d, Name=%s, Price=%.2f\n",
                   mid, menu[mid].id, menu[mid].name, menu[mid].price);
            return;
        } else if (cmp < 0) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("Khong tim thay mon!\n");
}
int main() {
    Dish menu[100] = {
        {1, "Com Tam", 30000},
        {2, "Pho Bo", 40000},
        {3, "Bun Cha", 35000},
        {4, "Mi Quang", 45000},
        {5, "Banh Mi", 20000}
    };
    int size = 5;
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. In danh sach mon an\n");
        printf("2. Chen mon an vao vi tri\n");
        printf("3. Sua mon an theo vi tri\n");
        printf("4. Xoa mon an theo vi tri\n");
        printf("5. Sap xep mon an\n");
        printf("6. Tim kiem theo ten\n");
        printf("7. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printMenu(menu, size);
            break;
        case 2:
            insertDish(menu, &size);
            break;
        case 3:
            editDish(menu, size);
            break;
        case 4:
            deleteDish(menu, &size);
            break;
        case 5: {
            char opt;
            printf("a. Giam dan theo price\n");
            printf("b. Tang dan theo price\n");
            printf("Chon: ");
            scanf(" %c", &opt);
            if (opt == 'a') sortDescending(menu, size);
            else if (opt == 'b') sortAscending(menu, size);
            else printf("Lua chon khong hop le!\n");
            break;
        }
        case 6: {
            char opt;
            printf("a. Tim kiem tuyen tinh\n");
            printf("b. Tim kiem nhi phan\n");
            printf("Chon: ");
            scanf(" %c", &opt);
            if (opt == 'a') linearSearch(menu, size);
            else if (opt == 'b') {
                printf("? Lýu ?: Nh? phân yêu c?u danh sách S?P X?P THEO NAME!\n");
                binarySearch(menu, size);
            }
            else printf("Lua chon khong hop le!\n");
            break;
        }
        case 7:
            printf("Thoat chuong trinh!\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    } while (choice != 7);
    return 0;
}
