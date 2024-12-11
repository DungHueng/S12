#include <stdio.h>

int main() {
    int num;
    printf("Nhap so nguyen: ");
    scanf("%d", &num);

    int numfind = 1; 
    if (num <= 1) {
        numfind = 0;
    } else {

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                numfind = 0;
                break; 
            }
        }
    }

    if (numfind) {
        printf("%d la so nguyen to.\n", num);
    } else {
        printf("%d khong phai la so nguyen to.\n", num);
    }

    return 0;
}
