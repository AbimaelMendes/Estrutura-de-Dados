#include <stdio.h>

int main(){
    int a, b, c;
    int *ap;

    sacnf("%d %d %d", &a, &b, &c);

    ap = &a;
    *ap = c + 1;
    b = *ap +1;
    ap = &c;

    printf("%d %d %d %d",*ap, a, b, c);

}