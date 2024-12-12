#include <stdio.h>
int main() {
    // Khai bao va gan gia tri cho chuoi
    char chuoi[] = "Hello world";
    char kyTu;
    int dem = 0;
    //Yeu cau nguoi dung nhap ky tu
    printf("Nhap vao mot ky tu bat ky: ");
    scanf(" %c", &kyTu);
    // Duyet qua chuoi va dem so lan xuat hien cua ky tu
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] == kyTu) {
            dem++;
        }
    }
    // In ra so lan xuat hien cua ky tu
    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", kyTu, dem);
    return 0;
}

