#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t);
void ReadString( char s[] ); /* 裁判提供，细节不表 */

int main()
{
    char s[MAXS], t[MAXS], *pos;
    
    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if ( pos != NULL )
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

/* 你的代码将被嵌在这里 */

char *search( char *s, char *t )
{
    int i=0, t_len=0;
    while(t[t_len]!='\0'){
        t_len ++;
    }
    while(s[i]!='\0'){
        int j=0, k=i;
        while(s[k]!='\0' && t[j]!='\0' && s[k] == t[j]){
            k ++;
            j ++;
        }
        if(t[j]=='\0'){
            return s + i;
        }

        i ++;
    }
    return(NULL);
}