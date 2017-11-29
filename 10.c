#include <stdio.h>
int main()

{
    int f,g, k;
    printf("Enter number of rows : ");
    scanf("%d",&k);

    for(f=1; f<=k; f++)
    {
        for(g=f; g<k; g++)
        {
            printf(" ");
        }

        for(g=1; g<=(2*f-1); g++)
        {

            if(f==k || g==1 || g==(2*f-1))

            {
                printf("*");
            }

            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
