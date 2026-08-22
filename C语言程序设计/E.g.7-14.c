/* 十六进制字符串转换成十进制非负整数 */
#include<stdio.h>
#define MAXLINE 80
int main()
{
    int i,k,number;
    char hexad[MAXLINE],str[MAXLINE];

    printf("Enter a string:");
    i = 0;
    while((str[i] = getchar()) != '#'){
        i ++;
    }
    str[i] = '\0';
    i = 0 ; k = 0;
    while(str[i] != '\0'){
        if((str[i]>='0'&&str[i]<='9')||
        (str[i]>='a'&&str[i]<='f')||
        (str[i]>='A'&&str[i]<='F')){
            hexad[k] = str[i];
            k ++;
        }
        i ++;
    }
    hexad[k] = '\0';
    printf("New string:");
    for(i=0;hexad[i]!='\0';i++){
        putchar(hexad[i]);
    }
    printf("\n");
    number = 0;
    for(i=0;hexad[i]!='\0';i++){
        if(hexad[i]>='0'&&hexad[i]<='9'){
            number = number * 16 + hexad[i] - '0';
        }
        else if(hexad[i]>='a'&&hexad[i]<='f'){
            number = number * 16 + hexad[i] - 'a' + 10;
        }
        else if(hexad[i]>='A'&&hexad[i]<='F'){
            number = number * 16 + hexad[i] - 'A' + 10;
        }
    }
    printf("Number = %d\n",number);
    return 0;
}