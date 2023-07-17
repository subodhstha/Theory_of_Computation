// write a program for concatenation of two string
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char s1[50], s2[50];
    int n;
    printf("Enter the first string\n");
    scanf("%s",&s1);
    printf("Enter the second string\n");
    scanf("%s",&s2);
    n = strlen(s1);
    strcat(s1, s2);
    printf(s1);
    getch();
    return 0;
}