#include<stdio.h>
#define MAXLINE 80
int main()
{
    int i;
    char str[MAXLINE];
    i = 0;
    while((str[i]=getchar())!='\n'){
        i ++;
    }
    str[i] = '\0';
    for(;i>=0;i--){
        putchar(str[i]);
    }
    return 0;
}