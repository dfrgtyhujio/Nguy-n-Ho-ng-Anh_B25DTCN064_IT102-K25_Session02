#include<stdio.h>
#include<math.h>

int main() {
    int a = 1 ;
    int b = 2 ;
    int c = 3 ;
    
    float A = pow(a,3) + pow(b,2) +2*c + sqrt(a + b -c) ;

    printf("result : %.2f", A);

    return 0;
}
