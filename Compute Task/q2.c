#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    char a[32], b[32], temp;
    printf("Enter the first string:\n");
    scanf("%s", &a);
    printf("Enter the second string:\n");
    scanf("%s", &b);
    for (int i = 0; i < strlen(a)-1; i++)
    {
        for (int j = 0; j < strlen(a)-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < strlen(b)-1; i++)
    {
        for (int j = 0; j < strlen(b)-1; j++)
        {
            if (b[j]>b[j+1])
            {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < strlen(a)+1; i++)
    {
        for (int j = 0; j < strlen(b); j++)
        {
            if (a[j]!=b[j])
            {
                temp = b[j];
                break;
            }
        }
    }
    printf("the character extra in the second string is %c", temp);
    return 0;
}
