#include <stdio.h>
int main(){
    int a = 15;
    int b = 20;
    printf("\nBefore swap: a = %d b = %d",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\nAfter swap: a = %d b = %d",a,b);
    return 0;
}