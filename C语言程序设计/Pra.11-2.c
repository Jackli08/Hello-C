#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex( char *s );

int main()
{
    int n;
    char s[MAXS];
    
    scanf("%s", s);
    n = getindex(s);
    if ( n==-1 ) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */

int getindex( char *s )
{
    char *list[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    char **ptr;
    int i, flag=-1;
    ptr = list;
    for(i=0; i<7; i++){
        if(strcmp(*(ptr+i), s)==0){
            flag = 0;
            break;
        }
    }
    if(flag){
        return flag;
    }
    else{
        return i;
    }
}