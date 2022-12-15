#include <stdio.h>
#include <stdlib.h>

int main()
{
    char usernsme[15];
    char password[10];
    printf("\n enter your username :");
    scanf("%s",&usernsme);
    printf("\n enter your password :");
    scanf("%s",&password);
    if(strcmp(usernsme,"ahmed")==0)
    {
        if(strcmp(password,"123456")==0)
        {
            printf("login siccessfull");
        }

    else
    {
        printf("worng passwoed");
    }
    }
    else
    {
        printf("\n user dose not exist");
    }
    getch();
    return 0 ;

}
