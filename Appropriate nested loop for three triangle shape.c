#include<stdio.h>

void main()
{
    int num; //number for ending value
    char x; //for print char

    printf("Enter the value of row : ");
    scanf("%d",&num);
    for(int row=1;row<=num;row++) //this operation for row
    {
        for(int c1=1;c1<=num-row;c1++) //this operation for give space
        {
            printf(" ");
        }
        x='A';
        for(int c2=1;c2<=row;c2++ ) //this operation for print 2nd triangle
        {

            printf("%c",x);
            x++;
        }
        int y=64+(row-1); // for reverse flow
        for(int c3=1;c3<=row-1;c3++) //this operation for print 3rd triangle
        {

            printf("%c",y);
            y--;
        }
        printf("\n");
    }
    printf("----------------------------------------------------- \n ");
    printf("My Name Is Dhruvin Vaghasiya. \nMy Id Number Is 24CE137.");

}
