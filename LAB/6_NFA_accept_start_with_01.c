// Develop a C program for an NFA that accepts all strings over Σ = {0, 1} starting with "01".
#include<stdio.h>
#include<conio.h>
int main(){
    enum states {q0, q1, q2};
    char input[20];
    enum states curr_state = q0;
    int i = 0;
    int flag = 0;
    printf("Enter the string with Σ = {0, 1} :\n");
    gets(input);
    char ch = input[i];
    while (ch != '\0' )
    {
        switch (curr_state)
        {
            case q0 :
                if (ch == '0')
                {
                    curr_state = q1;
                }
                else
                {
                    flag = 1;
                }
                break;
            case q1 :
                if (ch == '1')
                {
                    curr_state = q2;
                }
                else
                {
                    flag = 1;
                }
                break;
            case q2:
                if (ch == '0' || ch == '1')
                {
                    curr_state = q2;
                }
                break;
        }
        if (flag)
        {
            break;
        }
        ch = input[++i];
    }
    if (curr_state == q2)
    {
        printf("The string %s is accepted", input);
    }
    else
    {
        printf("The string %s is rejected", input);
    }
    return 0;
}
