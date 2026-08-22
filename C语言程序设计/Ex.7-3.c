#include<stdio.h>
int main()
{
    int i,n,num;
    scanf("%d",&n);
    int li[n];
    for(i=0;i<n;i++){
        scanf("%d",&num);
        li[n-1-i] = num;
    }
    for(i=0;i<n;i++){
        printf("%d",li[i]);
        if(i!=(n-1)){
            printf(" ");
        }
    }
    return 0;
}