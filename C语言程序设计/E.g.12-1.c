#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prime(int n);
int main()
{
    int n = 2, count = 0;
    FILE *fp;
    
    if((fp=fopen("Prime.txt", "w")) == NULL){
        printf("File open error!\n");
        exit(0);
    }
    while(count<500){
        if(prime(n)!=0){
            count ++;
            fprintf(fp, "%d ", n);
        }
        n ++;
    }
    if(fclose(fp)){
        printf("Can not close the file!\n");
        exit(0);
    }
    printf("Done\n");
    
    return 0;
}

int prime(int n)
{
    int i, limit;

    if(n<=1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        limit = sqrt(n) + 1;
        for(i=2; i<=limit; i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }
}