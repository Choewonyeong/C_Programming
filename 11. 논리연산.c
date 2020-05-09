#include <stdio.h>

int main(){
    int x = 10;
    int y = 11;

    printf("%d AND %d => %d\n", x!=y, x<y, x!=y && x<y);
    printf("%d AND %d => %d\n", x==y, x<y, x==y && x<y);
    printf("%d AND %d => %d\n", x!=y, x>y, x!=y && x>y);
    printf("%d AND %d => %d\n", x==y, x>y, x==y && x>y);

    printf("------------\n");
    
    printf("%d OR %d => %d\n", x!=y, x<y, x!=y || x<y);
    printf("%d OR %d => %d\n", x==y, x<y, x==y || x<y);
    printf("%d OR %d => %d\n", x!=y, x>y, x!=y || x>y);
    printf("%d OR %d => %d\n", x==y, x>y, x==y || x>y);

    return 0;
}