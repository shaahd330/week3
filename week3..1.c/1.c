#include <stdio.h>
#include <stdlib.h>

int GET_MAX (int x ,int y );



int main()
{
    int x,y;
    printf("please enter the frist number :");
    scanf("%d",&x);
    printf("please enter the second number :");
    scanf("%d",&y);
    GET_MAX(x,y);


    return 0;
}

int GET_MAX (int x,int y)
{
    if (x>y)
    {
        printf("x is greater than y");

    }
    else
    {
        printf("y is greater than x");
    }

}
