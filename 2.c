#include<stdio.h>
int main()
{
    int f,g,i,b;

    printf("Enter number of line:\n");
    scanf("%d",&b);

    printf("enter number:\n");
    scanf("%d",&f);

    for(i=1;i<=b;i++)
    {
        for(g=1;g<=f;g++)
        {
            printf("*");
        }
        printf("\n");

    }
}
