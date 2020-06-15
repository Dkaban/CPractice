  
// THE PROBLEM
// ***************************
// You have to input a five digit number and print the sum of digits of the number.
// Solution Created By: Dustin Kaban
// Date: June 14th, 2020
// ***************************

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += (n%10);
        n = n/10;
    }
    return sum;
}

int main() {
	
    int n;
    scanf("%d", &n);
    printf("%d",sum(n));
    return 0;
}
