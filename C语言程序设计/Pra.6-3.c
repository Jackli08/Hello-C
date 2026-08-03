#include<stdio.h>
int main()
{
    char ch;
    ch = getchar();
    while(ch!='\n')
    {
        if(ch=='Z'){
            ch = 'a';
        }
        else if(ch=='z'){
            ch = 'A';
        }
        else if(ch>='A'&&ch<'Z'){
            ch = ch - 'A' + 'a' + 1;
        }
        else if(ch>='a'&&ch<'z'){
            ch = ch - 'a' + 'A' + 1;
        }
        putchar(ch);
        ch = getchar();
    }
    return 0;
}