// THE PROBLEM
// ***************************
// You have to print the character,c, in the first line. Then print s in next line. In the last line print sen the sentence, .
// Solution Created By: Dustin Kaban
// Date: June 8th, 2020
// ***************************

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c;
    scanf("%c \n",&c);
    char s[100];
    scanf("%[^\n]%*c", s);
    char sen[100];
    scanf("%[^\n]%*c", sen);
    printf("%c \n",c);
    printf("%s \n",s);
    printf("%s",sen);
    return 0;
}
