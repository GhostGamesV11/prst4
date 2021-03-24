#include <stdio.h>
#include <stdlib.h>

int suma(int *,int *);
int main()
{
    int a=0,b=0,wynik=0;
    printf("Podaj wartosc a= \n");
    scanf("%d",&a);
    printf("Podaj wartosc b= \n");
    scanf("%d",&b);
    wynik=suma(&a,&b);
    printf("Suma tych wartosci wynosi: %d",wynik);
    return 0;
}

int suma(int *a,int *b)
{
  return (*a+*b);
}
