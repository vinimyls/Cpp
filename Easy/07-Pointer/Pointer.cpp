#include <stdio.h>
#include <stdlib.h> 

void update(int *a,int *b) {
    int v1 = *a;
    int v2 = *b;
    *a = v1 + v2;
    *b = abs(v1 - v2);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
