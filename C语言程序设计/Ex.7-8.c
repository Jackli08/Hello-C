#include<stdio.h>
#define MAXN 6
int main()
{
    int i,j,n,m;
    int a[MAXN][MAXN],b[MAXN][MAXN];
    scanf("%d%d",&m,&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    m = m % n;
    int k = 0;
    for(j=n-m;j<n;j++){
        for(i=0;i<n;i++){
            b[i][k] = a[i][j];
        }
        k ++;
    }
    for(j=0;j<n-m;j++){
        for(i=0;i<n;i++){
            b[i][k] = a[i][j];
        }
        k ++;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}