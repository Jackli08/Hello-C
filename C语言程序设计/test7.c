#include<stdio.h>
int main(void)
{
    int spd,lim;

    scanf("%d%d",&spd,&lim);
    if(spd>=lim*1.1&&spd<lim*1.5){
        printf("Exceed %.0f%. Ticket 200",100.0*(spd-lim)/lim);
    }
    else if(spd>=lim*1.5){
        printf("Exceed %.0f%. License Revoked",100.0*(spd-lim)/lim);
    }
    else{
        printf("OK");
    }

    return 0;
}