#include<stdio.h>
int main()

{
    int f,g,x;

    printf("Please enter number of line:\n");
    scanf("%d",&g);

    for(f=1;f<=g;f++)
    {
        for(x=f;x<g;x++)
        {
            printf(" ");
        }

        for(x=1;x<=(2*f-1);x++)
        {
            printf("*");
        }

        printf("\n");

    }
    return 0;
}
