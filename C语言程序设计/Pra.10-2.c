#include <stdio.h>

double fact( int n );
double factsum( int n );

int main()
{
    int n;

    scanf("%d",&n);
    printf("fact(%d) = %.0f\n", n, fact(n));
    printf("sum = %.0f\n", factsum(n));
        
    return 0;
}

/* 你的代码将被嵌在这里 */

double fact( int n )
{
    int res;
    if(n==1 || n==0){
        res = 1;
    }
    else{
        res = n * fact(n-1);
    }
    return res;
}

double factsum( int n )
{
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += fact(i);
    }
    return sum;
}