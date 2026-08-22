#include<stdio.h>
#define MAXN 10
int main()
{
    int t,i,j,k,n,flag;
    int a[MAXN][MAXN];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                scanf("%d",&a[j][k]);
            }
        }
        flag = 1;
        for(j=0;j<n;j++){
            if(flag==0){
                break;
            }
            else{
                for(k=0;k<j;k++){
                    if(a[j][k]!=0){
                        flag = 0;
                    }
                }
            }
        }
        if(flag==1){
            printf("YES");
        }
        else{
            printf("NO");
        }
        printf("\n");
    }
    return 0;
}