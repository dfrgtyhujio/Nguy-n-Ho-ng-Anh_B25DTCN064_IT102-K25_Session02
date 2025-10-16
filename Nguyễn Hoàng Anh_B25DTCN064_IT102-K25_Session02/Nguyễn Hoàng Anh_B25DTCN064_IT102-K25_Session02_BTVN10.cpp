#include<stdio.h>
#include<math.h>

int main() {
    int a = 3 ;
    int b = 4 ;
    int c = 2 ;
    double expression1 = sqrt(pow(a,2)+pow(b,2)) / (c+1);
    double expression2 = (a*b)/c;
    double expression3 = sqrt(abs(a-b)+pow(c,2));

    double S = expression1 + expression2 - expression3 ;
    printf("%.2f",S);

    return  0;
}

