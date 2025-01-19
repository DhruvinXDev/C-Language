/* host : Dhruvin
date : 10-10-2024 
Question :-
To sort a given array of strings into lexicographically 
increasing order or into an order in which the string with the lowest length appears first,
a sorting function with a flag indicating the type of comparison strategy can be written.
The disadvantage with doing so is having to rewrite the function for every new comparison strategy.

A better implementation would be to write a sorting function that accepts a pointer
to the function that compares each pair of strings.
Doing this will mean only passing a pointer to the sorting function with every new comparison strategy.

Given an array of strings, you need to implement a "string_short" function which sorts the strings according to a comparison function.

You also need to implement the following four string comparison functions:
1) int lexicographic_sort(const char* a, const char* b)
=>to sort the strings in lexicographically non-decreasing order.
2) int lexicographic_sort_reverse(const char* a, const char* b)
=>to sort the strings in lexicographically non-increasing order.
3) int sort_by_number_of_distinct_characters(const char* a, const char* b)
=>to sort the strings in non-decreasing order of the number of distinct characters present in them. If two strings have the same number of distinct characters present in them, then the lexicographically smaller string should appear first.
4) int sort_by_length(const char* a, const char* b)
=>to sort the strings in non-decreasing order of their lengths. If two strings have the same length, then the lexicographically smaller string should appear first.



*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int l1=strlen(a),l2=strlen(b);
    int char1[26]={0},char2[26]={0};
    int c1=0,c2=0;
    for(int i=0;i<l1;i++)
    {
        char t=a[i];
        int i1=t-'a';
        if(char1[i1]==0)
        {
            char1[i1]=1;
            c1++;
        }
    }
    for(int i=0;i<l2;i++)
    {
        char t=b[i];
        int i2=t-'a';
        if(char2[i2]==0)
        {
            char2[i2]=1;
            c2++;
        }
    }
    if(c1==c2)
    {
        return strcmp(a,b);
    }
    else
    {
        return c1-c2;
    }
}

int sort_by_length(const char* a, const char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);

    if (len_a == len_b) {
        return strcmp(a, b);
    } else {
        return len_a - len_b;
    }
    
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int i,j;
    char* t;
    t= (char*)malloc(2500 * sizeof(char*));
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            
            if((*cmp_func)(arr[i],arr[j])>0)
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    

}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
