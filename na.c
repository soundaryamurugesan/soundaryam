#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    i = 1;
   for(i=1;i<=n;i++)
    {
        sum += i;
        ++i;
    }

    printf("Sum = %d",sum);

    return 0;
}
