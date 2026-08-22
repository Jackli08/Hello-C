#include<stdio.h>
#define MAXN 10
int main()
{
    int i,k,index,temp,n;
    int a[MAXN];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(k=0;k<n;k++){
        index = k;
        for(i=k+1;i<n;i++){
            if(a[i]>a[index]){
                index = i;
            }
        }
        temp = a[k];
        a[k] = a[index];
        a[index] = temp;    
    }
    printf("%d",a[0]);
    for(i=1;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}