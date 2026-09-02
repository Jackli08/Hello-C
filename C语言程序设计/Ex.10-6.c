#include <stdio.h>

int sum( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf ("%d\n", sum(n));

    return 0;
}

/* 你的代码将被嵌在这里 */

int sum( int n )
{
    int res;
    if(n<=0){
        res = 0;
    }
    else{
        if(n==1){
            res = 1;
        }
        else{
            res = n + sum(n-1);
        }
    }
    return res;
}