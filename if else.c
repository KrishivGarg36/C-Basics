//Write a C program to input a character from user and check whether the given character is alphabet or not using if else. How to check whether a character is alphabet or not in C  programming. Logic to check if a character is alphabet or not in C program
#include <stdio.h>

int main()
{
    char ch;
    printf("Please enter a character");
    scanf("%c", &ch);

    if ((ch>="a" && ch<="z") || (ch>="A" && ch<="Z"));         
    {
        printf("Character is an alphabet"); 
    }

    else{
        printf("Character is not an alphabet");
    }

    return 0;

    
}