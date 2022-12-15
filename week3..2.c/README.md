# week3
## problem2
```c
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
```
```
please enter the frist number :20
please enter the second number :12
x=12 , y=20
```