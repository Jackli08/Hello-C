#include<stdio.h>
#define MAXLINE 80
int main()
{
    int i,k,flag,num;
    char str[MAXLINE],hexad[MAXLINE];
    i = 0;
    while((str[i] = getchar())!='#'){
        i ++;
    }
    str[i] = '\0';
    i = 0 ; k = 0;
    while(str[i]!='\0'){
        if((str[i]>='0'&&str[i]<='9')||
        (str[i]>='a'&&str[i]<='f')||
        (str[i]>='A'&&str[i]<='F')){
            hexad[k] = str[i];
            k ++;
        }
        i ++;
    }
    flag = 1;
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='-'){
            flag = 0;
            break;
        }
        if((str[i]>='0'&&str[i]<='9')||
        (str[i]>='a'&&str[i]<='f')||
        (str[i]>='A'&&str[i]<='F')){
            break;
        }
    }
    hexad[k] = '\0';
    num = 0;
    for(i=0;hexad[i]!='\0';i++){
        if(hexad[i]>='0'&&hexad[i]<='9'){
            num = num * 16 + hexad[i] - '0';
        }
        else if(hexad[i]>='a'&&hexad[i]<='f'){
            num = num * 16 + hexad[i] - 'a' + 10;
        }
        else if(hexad[i]>='A'&&hexad[i]<='F'){
            num = num * 16 + hexad[i] - 'A' + 10;
        }
    }
    if(flag==0){
        num = -num;
    }
    printf("%d",num);
    return 0;
}