#include<stdio.h>
int main(){
    //short: so nguyen nho, 2 byte
    short a = 10;
    // int: so nguyen thong thuong, 4 byte
    int b = 100;

    // long: so nguyen lon hon int, 4 hoac 8 byte tuy he thong
    long c = 1000L;

    // long long: so nguyen rat lon, 8 byte
    long long d = 10000LL;

    // unsigned short: so nguyen duong nho, khong co dau, 2 byte
    unsigned short e = 20;

    // unsigned int: so nguyen duong thong thuong, khong co dau, 4 byte
    unsigned int f = 200;

    // unsigned long: so nguyen duong lon hon int, khong co dau, 4 hoac 8 byte
    unsigned long g = 2000UL;

    // unsigned long long: so nguyen duong rat lon, khong co dau, 8 byte
    unsigned long long h = 20000ULL;

    // char: ky tu don hoac so nguyen nho (1 byte)
    char ch = 'A';

    printf("short a = %d\n",a);
    printf("int b = %d\n", b);
    printf("long c = %ld\n", c);
    printf("long long d = %lld\n", d);
    printf("unsigned short e = %u\n", e);
    printf("unsigned int f = %u\n", f);
    printf("unsigned long g = %lu\n", g);
    printf("unsigned long long h = %llu\n", h);
    printf("char ch = %c\n", ch);
    return 0;
}
