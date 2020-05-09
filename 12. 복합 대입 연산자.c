#include <stdio.h>

int main(){

    int x = 5;

    printf("%d + %d = %d\n", x, 2, x+=2);
    printf("%d - %d = %d\n", x, 2, x-=2);
    printf("%d * %d = %d\n", x, 2, x*=2);
    printf("%d / %d = %d\n", x, 2, x/=2);
    printf("%d %% %d = %d", x, 2, x%=2);

    return 0;
}