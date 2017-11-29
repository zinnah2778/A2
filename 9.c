#include <stdio.h>
int main()

{
    int f,g,k;

    printf("Please enter number of rows: ");
    scanf("%d",&k);

     for(f=1; f<=k; f++)
    {

        for(g=f; g<k; g++)
        {
            printf(" ");
        }

        for(g=1; g<=f; g++)
        {

            if(f==k || g==1 || g==f)
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
