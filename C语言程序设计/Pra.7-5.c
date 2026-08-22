#include<stdio.h>
#define MAXN 6
int main()
{
    int n,i,j,indexi,indexj;
    int a[MAXN][MAXN],row[MAXN],col[MAXN];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        indexj = 0;
        for(j=0;j<n;j++){
            if(a[i][j]>a[i][indexj]){
                indexj = j;
            }
        }
        row[i] = a[i][indexj];
    }
    for(j=0;j<n;j++){
        indexi = 0;
        for(i=0;i<n;i++){
            if(a[i][j]<a[indexi][j]){
                indexi = i;
            }
        }
        col[j] = a[indexi][j];
    }
    int flag = 0;
    for(i=0;i<n;i++){
        if(flag==1){
            break;
        }
        for(j=0;j<n;j++){
            if((a[i][j]==row[i])&&(a[i][j]==col[j])){
                flag = 1;
                printf("%d %d",i,j);
            }
        }
    }
    if(flag==0){
        printf("NONE");
    }
    return 0;
}