#include<stdio.h>
int main()
{
    int a,b,x;

    printf("Enter number of line:\n");
    scanf("%d",&b);

    for(a=1;a<=b;a++)
    {
        for(x=1;x<=a;x++)

        {
            printf("*");
        }

        printf("\n");

    }

    return 0;
}
