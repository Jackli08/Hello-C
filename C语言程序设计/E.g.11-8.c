#include<stdio.h>
char *match(char *s, char ch);
int main()
{
    char ch, str[80], *p=NULL;
    
    printf("Input the string:");
    scanf("%s", str);
    getchar();
    printf("Input a characters:");
    ch = getchar();
    if((p = match(str, ch))!=NULL){
        printf("%s\n", p);
    }
    else{
        printf("Not Found\n");
    }
    
    return 0;
}

char *match(char *s, char ch)
{
    while(*s != '\0'){
        if(*s==ch){
            return (s);
        }
        s ++;
    }
    
    return(NULL);
}