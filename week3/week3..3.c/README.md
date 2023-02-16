# week3
## problem3
```c
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
    printf("number of digits is : %d",count);
    return 0 ;
}
```
```
enter the number :123
number of the digits is : 3
```