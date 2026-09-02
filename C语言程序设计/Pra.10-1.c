#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
        
    return 0;
}


/* 你的代码将被嵌在这里 */

int search( int n )
{
    int cnt = 0;
    int i = 11;
    while(1){
        int t = (int)pow(i, 2);
        if(t>n)
            break;
        int a = t / 100;
        t = t % 100;
        int b = t / 10;
        t = t % 10;
        int c = t ;
        if(a==b || b==c || a==c){
            cnt ++;
        }
        i ++;
    }
    return cnt;
}