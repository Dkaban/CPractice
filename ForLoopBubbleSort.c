  // THE PROBLEM
// ***************************
// Creating a bubble sort using for loops in C
// Print out the total number of swaps performed, along with first element and last element after sorting.
// Solution Created By: Dustin Kaban
// Date: June 15th, 2020
// ***************************

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void printDetails(int a[], int totalSwaps, int n)
{
    printf("Array is sorted in %d swaps.\n",totalSwaps);
    printf("First Element: %d\n",a[0]);
    printf("Last Element: %d",a[n-1]);
}

void forLoopBubbleSort(int* a, int n)
{
    int totalSwaps = 0;
    for(int i=0;i<n;i++)
    {
        int numSwaps = 0;
        for(int j=0;j<n-1;j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                numSwaps++;
                totalSwaps++;
            }
        }
        if(numSwaps == 0)
        break;
    }
    printDetails(a, totalSwaps, n);
}

int main() {
    int n; 
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
    	scanf("%d",&a[a_i]);
    }
    forLoopBubbleSort(a,n);
    return 0;
}
