#include <stdio.h>
#include <stdlib.h>

void zamiana(int *,int *);
int main()
{
    int a=0,b=0;
    printf("Podaj wartosc a= \n");
    scanf("%d",&a);
    printf("Podaj wartosc b= \n");
    scanf("%d",&b);
    zamiana(&a,&b);
    printf("a=%d b=%d",a,b);
    return 0;
}
void zamiana(int *a,int *b)
{
    if(*b<*a)
    {
       int l=*a;
        *a=*b;
        *b=l;
    }
}
