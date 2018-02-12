#include<stdio.h>
#includ<conio.h>
int main()
{
    char a[100];
    int i,b=0;
    printf("\n enter the essay");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            b++;
        }
    }
        printf("%d",&b);
    
    getch();
}
