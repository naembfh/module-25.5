#include<stdio.h>
int recursion(int n)
{
if (n>0)
{
    printf("%d ",n);
    recursion(n-1);
}

}
int main()
{
    int n;
    scanf("%d",&n);
    recursion(n);
    
}