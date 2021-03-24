#include <stdio.h>
#include <stdlib.h>

void wstawienie(int ,int *);
int main()
{
    int a=0,b=0;
    printf("Podaj wartosc a= \n");
    scanf("%d",&a);
    printf("Podaj wartosc b= \n");
    scanf("%d",&b);
    printf("a=%d i b=%d\n",a,b);
    wstawienie(a,&b);
    printf("a=%d i b=%d\n",a,b);
    return 0;
}

void wstawienie(int n,int *w)
{
    *w=n;
}
