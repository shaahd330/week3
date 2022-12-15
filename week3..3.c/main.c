#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , count =0 ;
    printf("enter the number :");
    scanf("%d",&n);
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    printf("number of the digits is : %d",count);
    return 0 ;
}
