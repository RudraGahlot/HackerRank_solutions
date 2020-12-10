#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch;
char s[50];
char sen[500];
scanf("%c", &ch);
scanf("%s", s);
scanf("\n");
scanf("%[^\n]%*c", sen);
printf("%c", ch);
printf("\n");
printf("%s", s);
printf("\n");
printf("%s", sen); 
    return 0;
}
