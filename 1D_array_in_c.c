/*host: dhruvin vaghasiya 
date : 09-10-2024*/
#include <stdio.h>
int main() {
      int n,c=0;// n for number given input c for sum of the all input
      scanf("%d",&n);
      int a[n];
      for(int i=0;i<n;i++)
      {
          scanf("%d) Enter the number : %d",i+1,&a[i]);
      }
      for(int i=0;i<n;i++)
      {
          c+=a[i];
      }
      printf("The total is :%d\n",c);
printf("My name is dhruvin. \n My id is 24CE137.");
    return 0;
}
