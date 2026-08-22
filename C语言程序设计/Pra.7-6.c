#include<stdio.h>
#define MAXLINE 80
int main()
{
    int num,i;
    char str[MAXLINE];
    i = 0;
    while((str[i]=getchar())!='\n'){
        i ++;
    }
    str[i] = '\0';
    num = 0 ; i = 0;
    while(str[i]!= '\0'){
        if(str[i]>='B'&&str[i]<='Z'){
            if((str[i]!='E')&&(str[i]!='I')&&
            (str[i]!='O')&&(str[i]!='U')){
                num ++;
            }
        }
        i ++;
    }
    printf("%d",num);
    return 0;
}