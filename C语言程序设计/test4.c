#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,i,result;

    scanf("%d",&n);
    for(i=0;i<=n;i++){
        result = pow(n,i);
        printf("pow(%d,%d) = %d\n",n,i,result);
    }

    return 0;
}