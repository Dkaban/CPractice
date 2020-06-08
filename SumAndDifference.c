// THE PROBLEM
// ***************************
// Read in the 2 integers, then read in the 2 floats.  Print sum and difference accordingly.
// Solution Created By: Dustin Kaban
// Date: June 5th, 2020
// ***************************

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,j;
    scanf("%d %d",&i,&j);
    printf("%d ",i+j);
    printf("%d\n",i-j);
    float k,l;
    scanf("%f %f",&k,&l);
    printf("%.1f ",k+l);
    printf("%.1f",k-l);
    return 0;
}
