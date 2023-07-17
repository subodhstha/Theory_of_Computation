// To find the all sub-string of a given string.
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    int n;
    char str[50];
    printf("Enter the string\n");
    scanf("%s", str);
    n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k < j+1; k++)
            {
                printf("%c",str[k]);
            }
            printf("\n");
        }
    }
    getch();
    return 0;
}