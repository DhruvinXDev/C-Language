#include <stdio.h>
#include<string.h>
int main()
{
	char str[50];
    int len;
    gets(str);
    // ' ' = 32
    // '_' = 95
    len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            str[i]='_';
        }
    }
    puts(str);
	return 0;
}
