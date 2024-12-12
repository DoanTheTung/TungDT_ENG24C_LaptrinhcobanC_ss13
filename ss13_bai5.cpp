#include <stdio.h>
#include <string.h>
int main() {
    // Khai bao va gan gia tri cho chuoi
    char chuoi[100];
    // Yeu cau nguoi dung nhap chuoi
    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    // Kiem tra do dai chuoi
    int doDai = 0;
    while (chuoi[doDai] != '\0') {
        if (chuoi[doDai] == '\n') {
            chuoi[doDai] = '\0';
        }
        doDai++;
    }
    // Khai bao bien dem so ky tu
    int soTu = 0;
    int trongTu = 0;
    // Duyet qua cac ky tu trong chuoi
    for (size_t i = 0; i < doDai; i++) {
        if (chuoi[i] != ' ' && chuoi[i] != '\0') {
            trongTu = 1;
        } else if ((chuoi[i] == ' ' || chuoi[i] == '\0') && trongTu) {
            soTu++;
            trongTu = 0;
        }
    }
    // Kiem tra tu cuoi cung
    if (trongTu) {
        soTu++;
    }
    // In ra so tu
    printf("So tu trong chuoi: %d\n", soTu);
    // In ra do dai chuoi
    printf("Do dai cua chuoi: %zu\n", doDai);
    return 0;
}


