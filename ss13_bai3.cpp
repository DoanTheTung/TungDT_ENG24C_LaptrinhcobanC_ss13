#include <stdio.h>
#include <string.h>
int main() {
    // Khai bao va gan gia tri cho chuoi 
    char chuoi[] = "Hello world";
    int doDai = strlen(chuoi);
    //in ra chuoi dao nguoc
    printf("Chuoi dao nguoc: ");
    for (int i = doDai - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }
    printf("\n");
    return 0;
}

