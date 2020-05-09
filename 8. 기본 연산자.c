#include <stdio.h>

int main(){

    printf("%d + %d = %d\n", 5, 2, 5+2);
    printf("%d - %d = %d\n", 5, 2, 5-2);
    printf("%d * %d = %d\n", 5, 2, 5*2);
    printf("%d / %d = %d\n", 5, 2, 5/2);
    printf("%d %% %d = %d\n", 5, 2, 5%2);
    printf("------------\n");
    
    int x = 5;
    int y = 2;

    printf("%d + %d = %d\n", x, y, x+y);
    printf("%d - %d = %d\n", x, y, x-y);
    printf("%d * %d = %d\n", x, y, x*y);
    printf("%d / %d = %d\n", x, y, x/y);
    printf("%d %% %d = %d", x, y, x%y);

    return 0;
}