#include <stdio.h>
/* host name : Dhruvin vaghasiya 
   date :22/9/2024 */

void main()
{
    int n,w;
    printf("Enter numher of row:");
    scanf("%d",&n);
    
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (i==1||j==1||i==n||j==n)
            {
                if((i==1&&j==n)||(j==n&&i==n))
                {
                    printf(" ");
                }
                else
                printf(" *");
            }
            else
            printf("  ");

        }
        printf("\n");
    }
    for (int i=2;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            
            if (j==1||i==n||j==n)
            {
                if((i==1&&j==n)||(j==n&&i==n))
                {
                    printf(" ");
                }
                else
                printf(" *");
            }
            else
            printf("  ");

        }
        printf("\n");
    }
    printf("----------------------------------------------------- \n ");
    printf("My Name Is Dhruvin Vaghasiya. \n My Id Number Is 24CE137.");
}
