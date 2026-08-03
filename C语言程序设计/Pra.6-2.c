#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );
    
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));        
    printf("s = %d\n", SumA(a,n));    
    
    return 0;
}

/* 你的代码将被嵌在这里 */

int fn( int a, int n )
{
    int i;
    double item=0;
    for(i=1;i<=n;i++){
        item += a;
        item *= 10;
    }
    item /= 10;
    return item;
}


int SumA( int a, int n )
{
    int i;
    double sum=0;
    for(i=1;i<=n;i++){
        sum += fn(a,i);
    }
    return sum;
}