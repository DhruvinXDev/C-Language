#include<stdio.h>

void main()
{
    int row,cols,r,c;
    printf("Enter the number of row :");
    scanf("%d",&r);
    for(row=1;row<=r;row++)
       {
         for(cols=r;cols>row;cols--)
         {
             printf(" ");
         }
         for(int i=1;i<=row;i++)
         {
             printf("%d",i);
         }
         printf("\n");

       }
        printf("----------------------------------------------------- \n ");
        printf("My Name Is Dhruvin Vaghasiya. \nMy Id Number Is 24CE137.");
}
