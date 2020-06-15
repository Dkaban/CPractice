// THE PROBLEM
// ***************************
// Given 2 numbers, print the numbers out in word form if A >= 1 and B is <= 9 else print even or odd
// The numbers are a range from A to B, thus a for loop.
// Solution Created By: Dustin Kaban
// Date: June 14th, 2020
// ***************************

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printOutput(int a, int b)
{
    for(int i=a;i<=b;i++)
    {
        if(i <= 9)
        {
            switch(i)
            {
                case 1:
                printf("one\n");
                break;
                
                case 2:
                printf("two\n");
                break;

                case 3:
                printf("three\n");
                break;

                case 4:
                printf("four\n");
                break;

                case 5:
                printf("five\n");
                break;

                case 6:
                printf("six\n");
                break;

                case 7:
                printf("seven\n");
                break;

                case 8:
                printf("eight\n");
                break;

                case 9:
                printf("nine\n");
                break;
            }
        }
        else
        {
            if(i%2 == 0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }
    }
}

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    printOutput(a,b);
    return 0;
}
