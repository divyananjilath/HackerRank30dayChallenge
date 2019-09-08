#include <stdlib.h>
#include <stdio.h>
int main() {
    int n,temp,j,c=0; 
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
    	scanf("%d",&a[a_i]);
    }
   for(int a_i = 0; a_i < n; a_i++){
        for(j=0;j<n-a_i-1;j++){
            if(a[j]>a[j+1]){
            c++;
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
    printf("Array is sorted in %d swaps.\nFirst Element: %d\nLast Element: %d",c,a[0],a[n-1]);
    return 0;
}
