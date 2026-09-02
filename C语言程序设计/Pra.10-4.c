#include <stdio.h>

double fn( double x, int n );

int main()
{
    double x;
    int n;
    
    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x,n));
    
    return 0;
}

/* 你的代码将被嵌在这里 */

double fn( double x, int n )
{
    double res;
    if(n==1){
        res = x;
    }
    else{
        res = x - x * fn(x, n-1);
    }
    return res;
}