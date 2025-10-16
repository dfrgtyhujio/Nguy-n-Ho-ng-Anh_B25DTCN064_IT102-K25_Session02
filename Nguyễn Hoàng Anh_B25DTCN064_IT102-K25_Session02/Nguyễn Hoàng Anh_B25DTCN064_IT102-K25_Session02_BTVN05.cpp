#include <stdio.h>

int main() {
    int a = 5;
    int b = 8;
    float c = 4.7;
    
    float tong = a + b + c;
    int tongNguyen = a + b + (int)c;

    printf("Tong cua 3 so = %.2f\n", tong);
    printf("Tong phan nguyen cua 3 so = %d\n", tongNguyen);

    return 0;
}

