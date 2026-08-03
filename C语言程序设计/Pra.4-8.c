#include<stdio.h>
int main()
{
    int l,n;
    double sum=0.0,h;
    scanf("%d%d",&l,&n);
    if(n==0){
        printf("0.0 0.0");
    }
    else{
        h = 1.0*l;
        int i = 1;
        do{
            sum += h;
            h /= 2.0;
            i++;
        }while(i<=n);
        sum = 2.0*sum - 1.0*l;
        printf("%.1f %.1f",sum,h);
    }
    return 0;
}