#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
    
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */

int fib( int n )
{
    int x;
    if(n==1||n==2){
        x = 1;
    }
    else{
        int x1,x2,i;
        x1 = x2 = 1;
        for(i=3;i<=n;i++){
            x = x1 + x2;
            x1 = x2;
            x2 = x;
        } 
    }
    return x;
}


void PrintFN( int m, int n )
{
    int i=1,flag=0;
    while(fib(i)<=n){
        if(fib(i)<m){
            i++;
            continue;
        }
        flag = 1;
        printf("%d ",fib(i));
        i++;
    }
    if(flag==0){
        printf("No Fibonacci number");
    }
}