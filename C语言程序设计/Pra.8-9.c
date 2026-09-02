#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */

void StringCount( char *s )
{
    int uplet, lowlet, spa, num, oth;
    uplet = lowlet = spa = num = oth = 0;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]>='A' && s[i]<='Z'){
            uplet ++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            lowlet ++;
        }
        else if(s[i]==' '){
            spa ++;
        }
        else if(s[i]>='0' && s[i]<='9'){
            num ++;
        }
        else{
            oth ++;
        }
    }
    printf("%d %d %d %d %d", uplet, lowlet, spa, num, oth);
}