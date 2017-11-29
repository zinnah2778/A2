#include <stdio.h>
int main()
{
    int a,b;
    printf("\n");
    printf("How many star do you want?");
    scanf("%d",&b);

    for (a=1;a<=b;a++)
        printf("*");
    return 0;
}
