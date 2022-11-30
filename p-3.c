#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1000];
    scanf("%s", ch);
    int length = strlen(ch);
    // printf("%d\n", length);
    int freqArray[27];
    for (int i = 1; i <= 26; i++)
    {
        freqArray[i] = 0;
    }
    for (int i = 0; i < length; i++)
    {
        freqArray[(ch[i] - 'a') + 1]++;
    }
    int check_root_no = 1;
    
    for (int i = 1; i <= 26; i++)
    {
        //    check_root_no+= freqArray[i];
        // printf("%d--%d\n", i, freqArray[i]);
        if (freqArray[i] > 0)
        {
            check_root_no =check_root_no+( freqArray[i] * i);
        }
    }
    int result = 1;
    // printf("%d\n", check_root_no);
    for (int i = 1; i < check_root_no; i++)
    {
         result = result * 2;
        if (result == check_root_no-1)
        {
            printf("Yes\n");
            printf("Cost = 2^%d", i);
            return 0;
        }
        
    }
    printf("No");

    
}
