#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);
    
    return 0;
}

/* 你的代码将被嵌在这里 */

void delchar( char *str, char c )
{
    char new_str[21];
    int i, k=0;
    for(i=0; *(str+i)!='\0'; i++){
        if(*(str+i)!=c){
            *(new_str+k) = *(str+i);
            k ++;
        }
    }
    *(new_str+k) = '\0';
    i = 0;
    while(*(new_str+i)!='\0'){
        *(str+i) = *(new_str+i);
        i ++;
    }
    *(str+i) = '\0';
}