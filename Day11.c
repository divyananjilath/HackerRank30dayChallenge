#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[6][6],i,j,s,k,p=0;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
             scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            s=0;
            s=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(i==0 && j==0)
            {
                 p=s;
            }
            if(s>=p)
            {
                 p=s;
            }
        }
    }
    printf("%d",p);
   return 0;
}
