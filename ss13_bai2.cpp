#include <stdio.h>
int main() {
    // Khai bao va gan gia tri cho chuoi
    char chuoi[] = "Hello world";
    // In ra tung ký tu trong chuoi
    int i = 0;
    while (chuoi[i] != '\0') {
        printf("%c ", chuoi[i]);
        i++;
    }
    return 0;
}

