#include <stdio.h>

int tinhTong(int number1, int number2) {
    
     return	 number1 + number2;

}
int main() {
    int a, b,tong;
    printf("Moi ban nhap so thu nhat\n ");
       scanf("%d", &a);
    printf("Moi ban nhap so thu hai\n ");
    scanf("%d", &b);

       tong = tinhTong(a, b);

    printf("%d + %d = %d\n", a, b, tong);

    return 0;
}

