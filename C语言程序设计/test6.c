#include<stdio.h>
int main(void)
{
    int choice,i;
    double price;

    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
    for(i=1;i<=5;i++){
        scanf("%d",&choice);
        if(choice!=0){
            switch(choice){
            case 1:price = 3.00;break;
            case 2:price = 2.50;break;
            case 3:price = 4.10;break;
            case 4:price = 10.20;break;
            default:price = 0.00;break;;
            }
            printf("price = %.2f\n",price);
        }
        else{
            break;
        }
    }
    
    return 0;
}