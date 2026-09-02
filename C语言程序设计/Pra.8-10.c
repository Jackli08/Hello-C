#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, *p, i, sum=0;
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    for(i=0; i<n; i++){
        scanf("%d", p+i);
    }
    int min, max;
    min = max = *p;
    for(i=0; i<n; i++){
        if(*(p+i)>max)
            max = *(p+i);
        if(*(p+i)<min)
            min = *(p+i);
        sum += *(p+i);
    }
    float average = sum * 1.0 / n;
    printf("average = %.2f\n", average);
    printf("max = %.2f\n", (float)max);
    printf("min = %.2f", (float)min);
    free(p);
    return 0;
}