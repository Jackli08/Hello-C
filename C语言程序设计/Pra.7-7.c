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
    i = 0;
    while(str[i]!='\0'){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i] = 'Z' - (str[i] - 'A');
        }
        i ++;
    }
    i = 0;
    while(str[i]!='\0'){
        putchar(str[i]);
        i++;
    }
    return 0;
}