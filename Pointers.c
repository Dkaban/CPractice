// THE PROBLEM
// ***************************
// You have to complete the function void update(int *a,int *b), 
// which reads two integers as argument, and sets a with the sum of them, and b with the absolute difference of them.
// Solution Created By: Dustin Kaban
// Date: June 8th, 2020
// ***************************

#include <stdio.h>

void update(int *a,int *b) {
    int c = *a;
    int d = *b;
       *a = c + d;
       *b = abs(c-d);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
