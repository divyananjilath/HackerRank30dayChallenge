#include <stdlib.h>
#include <stdio.h>
int main() {
    int D1,M1,Y1,D2,M2,Y2,fine;
    scanf("%d%d%d",&D1,&M1,&Y1);
    scanf("%d%d%d",&D2,&M2,&Y2);
    fine=0;
    if(Y1==Y2)
    {
        if(M1==M2)
        {
            if(D1==D2)
            {
                fine=0;
            }
            else if(D1>D2){
                fine=15*(D1-D2);
            }
        }
        else if(M1>M2){
            fine=500*(M1-M2);
        }
    }
    else if(Y2<Y1){
        fine=10000;
    }
    printf("%d",fine);
    return 0;
}
