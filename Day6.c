#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void even(char s[])
{
    int j;
    for(j=0;j < strlen(s);j++)
    {
        if(j%2==0)
            printf("%c", s[j]);
    }
} 
void odd(char s[])
{
    int k;
    for(k=0;k<strlen(s);k++)
    {
        if(k%2!=0)
            printf("%c", s[k]);
    }
}
int main() {
int i,n;
char s[10000];
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%s", s);
    even(s);
    printf(" ");
    odd(s);
    printf("\n");
}   
    return 0;
}
