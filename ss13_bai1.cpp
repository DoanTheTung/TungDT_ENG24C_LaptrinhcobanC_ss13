#include <stdio.h>  
#include <string.h> 
int main() {
    // Khai bao bien chuoi va do dai chuoi
    char chuoi[100];
    int doDai=0;
    // Yeu cau nguoi dung nhap ky tu
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    // kiem tra do dai chuoi
    while (chuoi[doDai] != '\0' && chuoi[doDai] != '\n') { doDai++; }
    // In ra chuoi vua nhap
    printf("Chuoi vua nhap: %s\n", chuoi);
    // In ra do dai chuoi
    printf("Do dai cua chuoi: %zu\n", doDai);
    return 0;
}

