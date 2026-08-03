#include <stdio.h>

void hollowPyramid ( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    hollowPyramid ( n );

    return 0;
}

void hollowPyramid( int n )
{
    if(n==1){
        printf("1");
    }
    else{
        int i,j,lim=1;
        for(i=n-1;i>0;i--){
            for(j=1;j<=i;j++){
                printf(" ");
            }
            if(n-i==1){
                printf("1\n");
            }
            else{
                printf("%d",n-i);
                for(j=1;j<=lim;j++){
                    printf(" ");
                }
                printf("%d\n",n-i);
                lim += 2;
            }
        }
        for(i=1;i<=lim+2;i++){
            printf("%d",n);
        }
    }
}