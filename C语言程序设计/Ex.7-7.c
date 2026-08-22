#include<stdio.h>
#define MAXN 10
int main()
{
    int i,j,n;
    int a[MAXN][MAXN];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i==n-1)||(j==n-1)||(i+j==n-1)){
                a[i][j] = 0;
            }
        }
    }
    int sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum += a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}