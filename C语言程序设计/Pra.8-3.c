#include <stdio.h>
#define MAXN 10

void ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;
    
    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);
    
    ArrayShift(a, n, m);
    
    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    
    return 0;
}

/* 你的代码将被嵌在这里 */

void ArrayShift( int a[], int n, int m )
{
    if(m>n) m -= n;
    int b[m], c[n-m], i, j=0;
    for(i=0; i<m; i++){
        b[i] = a[n-m+i];
    }
    for(i=0; i<(n-m); i++){
        c[i] = a[i];
    }
    for(i=0; i<m; i++){
        a[i] = b[i];
    }
    for(i=m; i<n; i++){
            a[i] = c[j];
            j ++;
    }
}