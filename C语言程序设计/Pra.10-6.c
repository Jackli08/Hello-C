#include <stdio.h>

int f( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    printf("%d\n", f(n));
    
    return 0;
}

/* 你的代码将被嵌在这里 */

int f( int n )
{
    int res;
    if(n==0){
        res = 0;
    }
    else if(n==1){
        res = 1;
    }
    else{
        res = f(n-1) + f(n-2);
    }
    return res;
}