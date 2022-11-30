#include <stdio.h>
int recursion(int n)
{
    if (n > 0)
    {
        return recursion(n - 1) + n;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int sum = recursion(n);
    printf("%d", sum);
}