
#include <stdio.h>
/* host name : Dhruvin vaghasiya 
   date :30/8/2024 */
   
void main() 
{
    int a[25],m,n; 
    // m for sort price 
    // n for total inventory items 
    
    printf("Enter the values of total inventory items:");
    scanf("%d",&n);
    
    for(int x=0;x<n;x++)
    {
        printf("Enter the %d item price :",x+1);
        scanf("%d",&a[x]);
    }
    for(int y=0;y<n;y++)
    {
        for(int z=y+1;z<n;z++)
        {
            if(a[y]>a[z])
            {
                m=a[y];
                a[y]=a[z];
                a[z]=m;
            }
        }
    }
     for(int w=0;w<n;w++)
     {
         printf("The %d item price is %d\n",w+1,a[w]);
     }

    printf("----------------------------------------------------- \n ");
    printf("My Name Is Dhruvin Vaghasiya. \nMy Id Number Is 24CE137.");
}
