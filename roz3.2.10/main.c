#include <stdio.h>
#include <stdlib.h>

double *rezerwacja();
int main()
{
    int *a;
    a=*rezerwacja;
    printf("a=%d",a);
    return 0;
}

double *rezerwacja()
{
    return malloc(sizeof(double));
}
