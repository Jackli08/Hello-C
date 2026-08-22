#include<stdio.h>
#define MAXN 10
int main()
{
    int n,i,num,res,index;
    int cnt[MAXN];
    scanf("%d",&n);
    for(i=0;i<MAXN;i++){
        cnt[i] = 0;
    }
    for(i=0;i<n;i++){
        scanf("%d",&num);
        do{
            res = num % 10;
            cnt[res] ++;
            num /= 10;
        }while(num>0);
    }
    index = 0;
    for(i=1;i<MAXN;i++){
        if(cnt[i]>cnt[index]){
            index = i;
        }
    }
    printf("%d:",cnt[index]);
    for(i=0;i<MAXN;i++){
        if(cnt[i]==cnt[index]){
            printf(" %d",i);
        }
    }
    return 0;
}