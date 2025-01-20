#include<stdio.h>
/* host name : Dhruvin vaghasiya 
   date :10/9/2024 */
void main()
{
    int x,y,z,a,b,c,ans=0,num;
    //x,y,z,a,b and c is used for loop
    //ans use for shorting identfier if ans=0 it means no shorting else short's the name's.
    //num for total number of student
    printf("Enter Total Number Of Student :");
    scanf("%d",&num);
    char name[num][100],ext[100];
    //collect student name form the user.

    for(x=0;x<num;x++)
    {
        printf("%3d) Student Name :",x+1);
        scanf("%s",name[x]);
    }
    //ans = 1 for name[y] is maximum then swap.

    for(y=0;y<(num-1);y++)//for 1st name
    {
        for(z=y+1;z<num;z++)//for 2nd name
        {
          //compare two name's
          for(a=0;name[y][a]!='\0'&& name[z][a]!='\0';a++)
          {
            if(name[y][a]>name[z][a])
            {
              ans=1;
            }
            else if(name[y][a]<name[z][a])
            {
              break; //for no swap
            }

          }
          //swaping condition
          if(ans==1)
          {
            for(b=0;name[y][b]!='\0';b++)
            {
              ext[b]=name[y][b];
            }
            ext[b]='\0';//for include null value in the last

            //remove all the value in name[y][c].
            for(c=0;name[y][c]!='\0';c++)
            {
              name[y][c]='\0';
            }

            for(b=0;name[z][b]!='\0';b++)
            {
              name[y][b]=name[z][b];
            }
            name[y][b]='\0';//for include null value in the last

            //remove all the value in name[z][c].
            for(c=0;name[z][c]!='\0';c++)
            {
              name[z][c]='\0';
            }
            
            for(b=0;ext[b]!='\0';b++)
            {
              name[z][b]=ext[b];
            }
            name[z][b]='\0';//for include null value in the last

            // remove all the value in ext[c].
            for(c=0;ext[c]!='\0';c++)
            {
              ext[c]='\0';
            }
          }
          ans=0;//give initial value

        }
    }
    printf("----------------------------------------------------- \n");
    printf("Shoted Student Name list :\n");

    for(y=0;y<num;y++)
    {
       printf("%3d) Student Name :%s\n",y+1,name[y]);
    }
    printf("----------------------------------------------------- \n");
    printf("My Name Is Dhruvin Vaghasiya. \nsMy Id Number Is 24CE137.");
}
