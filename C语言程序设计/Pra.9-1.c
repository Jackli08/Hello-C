#include<stdio.h>
struct time {
    int hor, min, sec;
};
int main()
{
    struct time t;
    int n;
    scanf("%d:%d:%d", &t.hor, &t.min, &t.sec);
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        if(t.sec<59)
            t.sec ++;
        else{
            t.sec = 0;
            if(t.min<59)
                t.min ++;
            else{
                t.min = 0;
                if(t.hor<23)
                    t.hor ++;
                else
                    t.hor = 0;
            }
        }
    }
    printf("%02d:%02d:%02d", t.hor, t.min, t.sec);
    return 0;
}