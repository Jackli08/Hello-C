#include<stdio.h>
#define MAXN 20
int main()
{
    int n1,n2,i,k,count=0;
    int arr1[MAXN],arr2[MAXN],res[MAXN*2];
    int Search(int x,int a[],int len);
    scanf("%d",&n1);
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&n2);
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n1;i++){
        if(Search(arr1[i],arr2,n2)==0){
            for(k=0;k<count;k++){
                if(arr1[i]==res[k]){
                    break;
                }
            }
            if(k==count){
                res[count] = arr1[i];
                count ++;
            }
        }
    }
    for(i=0;i<n2;i++){
        if(Search(arr2[i],arr1,n1)==0){
            for(k=0;k<count;k++){
                if(arr2[i]==res[k]){
                    break;
                }
            }
            if(k==count){
                res[count] = arr2[i];
                count ++;
            }
        }
    }
    printf("%d",res[0]);
    for(i=1;i<count;i++){
        printf(" %d",res[i]);
    }
    return 0;
}


int Search(int x,int a[],int len)
{
    int i,ret=0;
    for(i=0;i<len;i++){
        if(x==a[i]){
            ret = 1;
            break;
        }
    }
    return ret;
}