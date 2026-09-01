//Write a C program to enter month number between(1-12) and print number of days in month using if else. How to print number of days in a given month

#include <stdio.h>

int main()
{
    int month;
    printf("Enter the name of the month");  


if(month == 1)  
{
    printf("31 days");
}

else if(month == 2)
{
    printf("28 or 29 days");
}

else if(month == 3)
{
    printf("31 days");
}

else if(month == 4)
{
    print("30 days");
}

else if(month == 5)
{
    print("31 days");
}

else if(month == 6)
    {
        printf("30 days");
    }
    else if(month == 7)
    {
        printf("31 days");
    }
    else if(month == 8)
    {
        printf("31 days");
    }
    else if(month == 9)
    {
        printf("30 days");
    }
    else if(month == 10)
    {
        printf("31 days");
    }
    else if(month == 11)
    {
        printf("30 days");
    }
    else if(month == 12)
    {
        printf("31 days");
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }

    return 0;
}

