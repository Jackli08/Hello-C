#include<stdio.h>
#include<stdlib.h>
void swap(int *px, int *py);
void bubble(int *p, int n);
int main()
{
    int n, i, *p;
    printf("Enter n:");
    scanf("%d", &n);
    if((p = (int *)calloc(n, sizeof(int)))==NULL){
        printf("Not able too allocate memory.\n");
        exit(1);
    }
    printf("Enter %d integers:", n);
    for(i=0; i<n; i++){
        scanf("%d", p+i);
    }
    bubble(p, n);
    printf("After sorted:");
    for(i=0; i<n; i++){
        printf("%3d", *(p+i));
    }
    free(p);
    return 0;
}
void swap(int *px, int *py)
{
    int t;
    t = *px;
    *px = *py;
    *py = t;
}
void bubble(int *p, int n)
{
    int i, j, t;
    for(i=1; i<n; i++){
        for(j=0; j<n-1; j++){
            if(*(p+j)>(*(p+j+1))){
                swap(p+j, p+j+1);
            }
        }
    }
}