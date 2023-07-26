// Develop a C program that generates strings from a context-free grammar for the language {a^n b^n c^n | n >= 1}.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n (n >= 1): ");
    scanf("%d", &n);
    if (n < 1) 
    {
        printf("Invalid input!! n must be greater than or equal to 1.\n");
        return 0;
    }
    printf("Generated string for the input %d is: ",n);
    // Generate the string "a^n b^n c^n"
    for (int i = 0; i < n; i++) 
    {
        printf("a");
    }
    for (int i = 0; i < n; i++) 
    {
        printf("b");
    }
    for (int i = 0; i < n; i++) 
    {
        printf("c");
    }
    printf("\n");
    return 0;
}