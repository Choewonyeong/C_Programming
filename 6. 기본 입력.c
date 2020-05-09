#include <stdio.h>

int main(){
    int var1;
    printf("Input Number : ");
    scanf("%d", &var1);
    printf("Number is %d\n", var1);
    printf("Address of Number is %d", &var1);
    return 0;
}