#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int p;
    double q;
    char r[100];

    // Declare second integer, double, and String variables.
    scanf("%d integer",&p);
    scanf("%lf double",&q);
    scanf("%[^\n]s", r);
    // Read and save an integer, double, and String to your variables.
    printf("%d",i+p);
    // Print the sum of both integer variables on a new line.
    printf("\n%.1lf\n",d+q);
    printf("%s%s", s,r);
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
