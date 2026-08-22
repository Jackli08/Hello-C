#include<stdio.h>
#define MAXLINE 80
int main()
{
    int i,k,flag=0;
    char str[MAXLINE],c;
    scanf("%c",&c);
    getchar();
    i = 0 ; flag = 0;
    while((str[i]=getchar())!='\n'){
        i ++;
    }
    str[i] = '\0';
    for(i=0;str[i]!='\0';i++){
        if(str[i]==c){
            k = i;
            flag = 1;
        }
    }
    if(flag==0){
        printf("Not Found");
    }
    else{
        printf("index = %d",k);
    }
    return 0;
}