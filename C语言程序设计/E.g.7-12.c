/* 凯撒密码 */
#include<stdio.h>
#define MAXLINE 80
#define M 26
int main()
{
    int i,offset;
    char str[MAXLINE];

    printf("Enter a string:");
    i = 0;
    while((str[i] = getchar()) != '\n'){
        i ++;
    }
    str[i] = '\0';
    printf("Enter offset:");
    scanf("%d",&offset);
    if(offset >= M){
        offset = offset % M;
    }
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            if((str[i] - 'A' + offset)<M){
                str[i] = str[i] + offset;
            }
            else{
                str[i] = str[i] - (M - offset);
            }
        }
        else if(str[i]>='a' && str[i]<='z'){
            if((str[i] - 'a' + offset)<M){
                str[i] = str[i] + offset;
            }
            else{
                str[i] = str[i] - (M - offset);
            }
        }
    }
    printf("After being encrypted:");
    for(i=0;str[i]!='\0';i++){
        putchar(str[i]);
    }
    printf("\n");
    return 0;
}