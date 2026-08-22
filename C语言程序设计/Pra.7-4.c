#include<stdio.h>
#define MAXN 6
#define MAXM 6
int main()
{
    int n,m,i,j,sum;
    int a[MAXM][MAXN];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        sum = 0;
        for(j=0;j<n;j++){
            sum += a[i][j];
        }
        printf("%d",sum);
        printf("\n");
    }
    return 0;
}