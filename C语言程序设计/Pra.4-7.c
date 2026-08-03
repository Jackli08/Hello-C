#include<stdio.h>
int GCD(int m,int n);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    if(m<n){
        int t = m;
        m = n;
        n = t;
    }// m > n
    int gcd = GCD(m,n);
    int lcm;
    lcm = m * n / gcd;
    printf("%d %d",gcd,lcm);
    return 0;
}
// 最大公约数(辗转相除法)
int GCD(int m,int n){
    int d;
    while (n>0){
        d = m % n;
        m = n;
        n = d;
    }
    return m;
}
