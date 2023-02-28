// write a program to find the substring in a string with a matched index number
#include<stdio.h>
#include<conio.h>
#include<string.h>
int indexOfSubstring(char s1[], char s2[]);
int main(){
    char s1[50], s2[50];
    int index;
    printf("Enter the string\n");
    scanf("%s",&s1);
    printf("Enter the string to find in first string\n");
    scanf("%s",&s2);
    index = indexOfSubstring(s1,s2);
    if (index == -1)
    {
        printf("String is not found in first string");
    }
    else
    {
        printf("String is found in %d index",index);
    }
    getch();
    return 0;
}


int indexOfSubstring(char s1[], char s2[])
{
    int s2len, j,k,i;
    s2len= strlen(s2);
    for (i = 0;s1[i+s2len-1]; i++)
    {
        k = i;
        for (j = 0; j <= s2len-1; j++)
        {
            if (s1[k] != s2[j])
            {
                break;
            }
            k++;
        }
        if (j == s2len)
        {
            return i;
        }
    }
    return -1;
}