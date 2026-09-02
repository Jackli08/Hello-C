#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;
    
    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */

void strmcpy( char *t, int m, char *s )
{
    int i=0;
    while(*(t+i)!='\0'){
        i ++;
    }
    if(m>i){
        *s = '\0';
    }
    else{
        i = 0;
        m -= 1;
        while(*(t+m+i)!='\0'){
            *(s+i) = *(t+m+i);
            i ++;
        }
        *(s+i) = '\0';
    }
}