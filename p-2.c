#include <stdio.h>
int sorted_array(int arrray[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int k;
    scanf("%d", &k);
    int sortedArray = sorted_array(array, n);
    printf("%dth largest element is %d\n", k, array[n - 4]);
    printf("%dth smallest element is %d", k, array[ 4-1]);
}
int sorted_array(int arrray[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arrray[j] > arrray[j + 1])
            {
                temp = arrray[j];
                arrray[j] = arrray[j + 1];
                arrray[j + 1] = temp;
            }
        }
    }
}