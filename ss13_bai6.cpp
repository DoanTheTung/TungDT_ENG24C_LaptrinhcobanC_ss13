#include <stdio.h>
#include <string.h>
// Ham kiem tra ky tu chu cai
int laChuCai(char kyTu) {
    if ((kyTu >= 'A' && kyTu <= 'Z') || (kyTu >= 'a' && kyTu <= 'z')) {
        return 1;
    }
    return 0;
}
int main() {
    // Khai bao va gan gia tri cho chuoi
    char chuoi[100];
    int demChuCai = 0;
    // Yeu cau nguoi dung nhap chuoi
    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    // Kiem tra do dai trong chuoi
    int doDai = 0;
    while (chuoi[doDai] != '\0') {
        if (chuoi[doDai] == '\n') {
            chuoi[doDai] = '\0';
        }
        doDai++;
    }
    // Kiem tra cac ky tu trong chuoi
    for (size_t i = 0; i < doDai; i++) {
        if (laChuCai(chuoi[i])) {
            demChuCai++;
        }
    }
    // In ra so ky tu la chu cai
    printf("So ky tu la chu cai trong chuoi: %d\n", demChuCai);
    // In ra do dai chuoi
    printf("Do dai cua chuoi: %zu\n", doDai);
    return 0;
}


