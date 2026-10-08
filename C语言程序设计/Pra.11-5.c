#include <stdio.h>

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;
    
    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

/* 你的代码将被嵌在这里 */

char *match( char *s, char ch1, char ch2 ) {
    char *p = s;
    while (*p != '\0' && *p != ch1) {
        p++;
    }
    char *result = p;
    while (*p != '\0') {
        putchar(*p);
        if (*p == ch2) {
            printf("\n");
            break;
        }
        p++;
    }
    if(*p == '\0'){
        printf("\n");
    }
    return result;
}