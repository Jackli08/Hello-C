#include<stdio.h>
int main()
{
    char ch;
    ch = getchar();
    if(ch>='a'&&ch<='z'){
        ch = ch -'a' + 'A';
    }
    putchar(ch);
    ch = getchar();
    while(ch!='\n'){
        if(ch==' '){
            putchar(ch);
            ch = getchar();
            if(ch>='a'&&ch<='z'){
                ch = ch -'a' + 'A';
            }
            putchar(ch);
        }
        else{
            putchar(ch);
        }
        ch = getchar();
    }
    return 0;
}