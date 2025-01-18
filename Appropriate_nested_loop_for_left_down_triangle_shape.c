#include<stdio.h>

void main()
{
    int row,cols,r;
    printf("Enter the number of row :");
    scanf("%d",&r);
    for(row=1;row<=r;row++)
       {
         for(cols=1;cols<=row;cols++)
         {
              if(cols%2==0)
         {
             printf("%3d",0);
         }
         else
         {
             printf("%3d",1);
         }
         }
         printf("\n");

       }
       printf("----------------------------------------------------- \n ");
        printf("My Name Is Dhruvin Vaghasiya. \nMy Id Number Is 24CE137.");
}
