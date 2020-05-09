#include <stdio.h>

int main(){
    unsigned char a = 4; // 0000 0100
    unsigned char b = 8; // 0000 1000

    printf("%d\n", a);
    printf("%d\n", b);

    a = a << 1;     // 0000 1000
    b = b << 2;     // 0001 0000

    printf("%d\n", a);
    printf("%d\n", b);

    char c = 1;     // 0000 0001
    int d = 1;      // 0000 0001

    printf("c : %d\n", c);
    printf("d : %d\n", d);

    c = c << 8;     // 0000 0001 0000 0000
    d = d << 8;     // 0000 0001 0000 0000

    printf("c << 8 : %d\n", c);
    printf("d << 8 : %d\n", d);

    unsigned char e = 1;
    char f = 1;

    printf("e : %d\n", e);
    printf("f : %d\n", f);

    e = e << 7;
    f = f << 7;

    printf("e << 7 : %d\n", e);
    printf("f << 7 : %d\n", f);

    return 0;
}