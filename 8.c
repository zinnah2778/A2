#include <stdio.h>
int main()

{
    int f,g,k;
    printf("Please enter number of rows: ");
    scanf("%d",&k);

    for(f=1; f<=k; f++)
    {
        for(g=1; g<=f; g++)
        {

            if(g==1 || g==f || g==k)
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
