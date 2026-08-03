#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );
    
int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

/* 你的代码将被嵌在这里 */

int prime( int p )
{
    int flag = 1;
    if(p==1){
        flag = 0;
    }
    else if(p==2);
    else{
        int i;
        double lim;
        lim = sqrt(p) + 1;
        for(i=2;i<=lim;i++){
            if(p%i==0){
                flag = 0;
                break;
            }
        }
    }
    return flag;
}


void Goldbach( int n )
{
    int i,flag=0;
    for(i=3;i<=n;i+=2){
        if(flag==1){
            break;
        }
        if(prime(i)==1){
            int j;
            for(j=i;j<=n;j+=2){
                if(flag==1){
                    break;
                }
                if(prime(j)==1){
                    if(i+j==n){
                        printf("%d=%d+%d",n,i,j);
                        flag = 1;
                    }
                }
            }
        }
    }
}