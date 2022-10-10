#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a, b, count = 0;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    int temp = a;
    while (a%b != 0)    
    {
        a++;
        count++;
    }
    printf("The minimum number of moves required to make %d divisible by %d is %d", temp, b, count);
    return 0;
}
