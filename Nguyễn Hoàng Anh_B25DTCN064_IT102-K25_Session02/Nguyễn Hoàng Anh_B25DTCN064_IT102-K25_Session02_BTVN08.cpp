#include<stdio.h>
#include<math.h>

int main(){
    int number = 12345 ;
    int result = 0 ;

    // chu so hang don vi
    int unit = number % 10 ;
    number /= 10 ;
    result += unit ;

    // chu so hang chuc
    int dozens = number % 10 ;
    number /= 10 ;
    result *= 10 ;
    result += dozens ;


    // chu so hang tram
    int hundred = number % 10 ;
    number /= 10 ;
    result *= 10 ;
    result += hundred ;

    // chu so hang nghin
    int thousands = number % 10 ;
    number /= 10 ;
    result *= 10 ;
    result += thousands ;

    // chu so hang chuc nghin
    int tenOfThousands = number % 10 ;
    number /= 10 ;
    result *= 10 ;
    result += tenOfThousands ;

    printf("so dao nguoc la : %d\n",result) ;

    return 0;
}
