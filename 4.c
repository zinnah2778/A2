#include<stdio.h>
int main()

{
    int f,g,b,y;

    printf("Enter number of line:\n");
    scanf("%d",&b);

    for(f=1;f<=b;f++)
    {
        for(g=f;g<b;g++)
        {
            printf(" ");
        }

        for(g=1;g<=f;g++)
        {
            printf("*");
        }

        printf("\n");

    }
    return 0;
}
