#include <stdio.h>
int summ(int *a, int *b, int *c)
{
    return *a + *b + *c;
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int *p = &a;
    int *q = &b;
    int *r = &c;
    int summation = summ(p, q, r);
    // printf("%p\n", p);
    // printf("%d\n", p);
    // printf("%d\n", *p);
    printf("%d", summation);
}
