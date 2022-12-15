#include <stdio.h>
#include <stdlib.h>
int x ,y ;
int swap (int x,int y);
int main()
{
    printf("please enter the frist number :");
    scanf("%d",&x);
    printf("please enter the second number :");
    scanf("%d",&y);
    swap(x,y);
    return 0 ;

}

int swap (int x,int y)
{
    int z ;

    z = x;
    x =y;
    y=z;

    printf("x=%d , y=%d",x,y);
}
