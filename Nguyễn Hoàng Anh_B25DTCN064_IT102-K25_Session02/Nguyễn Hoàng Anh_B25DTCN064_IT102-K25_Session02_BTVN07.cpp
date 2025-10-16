#include<stdio.h>
#include<math.h>

int main(){
    int number = 12345 ;

    // chu so hang don vi
    int unit = number % 10 ;
    number /= 10 ;

    // chu so hang chuc
    int dozens = number % 10 ;
    number /= 10 ;

    // chu so hang tram
    int hundred = number % 10 ;
    number /= 10 ;

    // chu so hang nghin
    int thousands = number % 10 ;
    number /= 10 ;

    // chu so hang chuc nghin
    int tenOfThousands = number % 10 ;
    number /= 10 ;

    int sum = unit + dozens + hundred + thousands + tenOfThousands ;
    printf("sum : %d",sum) ;

    return 0;
}
