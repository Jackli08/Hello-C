#include <stdio.h>

int reverse( int number );
    
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

/* 你的代码将被嵌在这里 */

int reverse( int number )
{
    int flag = 0;
    if(number<0){
        number = -number;
        flag = 1;
    }
    if(number%10==0){
        number /= 10;
    }
    int item=0;
    while(number>0){
        item += number % 10;
        number /= 10;
        item *= 10;
    }
    item /= 10;
    if(flag==1){
        item = -item;
    }
    return item;
}