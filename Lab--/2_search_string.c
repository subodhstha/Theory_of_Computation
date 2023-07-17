// write a program to search the string
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char s1[50], s2[50];
    char *result;
    printf("Enter the string\n");
    scanf("%s",&s1);
    printf("Enter the character to search in string\n");
    scanf("%s",&s2);
    result = strstr(s1, s2);
    if (result == 0)
    {
        printf("Character is not found in string\n");
    }
    else
    {
        printf("Character %s is found in string %s\n",s2, s1);
    }
    getch();
    return 0;
}