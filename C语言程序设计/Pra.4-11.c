#include<stdio.h>
#include<math.h>
int main(void)
{
    int m,n,i,j,count=0,sum=0,flag,limit; /* flag=0 -> 是素数 */

    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++){
        if(i<=1){
            flag = 1;
        }
        else if(i==2){
            flag = 0;
        }
        else{
            flag = 0;
            limit = sqrt(i)+1;
            for(j=2;j<=limit;j++){
                if(i%j==0){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag==0){
            count ++;
            sum += i;
        }
    }
    printf("%d %d",count,sum);

    return 0;
}