// To find the sub string of given length on the basis of position and length
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[50], sub[50];
    int posi, len, i = 0;
    printf("Enter the string \n");
    scanf("%s", &str);
    // gets(str);
    printf("Enter the postion and length of the substring\n");
    scanf("%d %d", &posi, &len);
    while (i < len)
    {
        sub[i] = str[posi + i - 1];
        i++;
    }
    sub[i] = '\0';
    printf("Required substring is \"%s\"\n",sub);
    return 0;
}