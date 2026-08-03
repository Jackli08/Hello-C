#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k,d;
    d = n;
    for(i=1;i<=n;i+=2){
        for(j=1;j<d;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
        d -= 2;
    }
    d = 3;
    for(i=n-2;i>=1;i-=2){
        for(j=1;j<d;j++){
            printf(" ");
        }
        for(k=i;k>=1;k--){
            printf("* ");
        }
        d += 2;
        printf("\n");
    }
    return 0;
}