// THE PROBLEM
// ***************************
// Write a function that returns the maximum out of a group of 4 numbers.
// Solution Created By: Dustin Kaban
// Date: June 8th, 2020
// ***************************

#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int maxAB = a > b ? a : b;
    int maxCD = c > d ? c : d;
    int max = maxAB > maxCD ? maxAB : maxCD;
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
