#include<stdio.h>
struct book
{
    double price;
    char title[31];
};
int main()
{
    int n, i;
    scanf("%d", &n);
    getchar();
    struct book books[10];
    for(i=0; i<n; i++){
        gets(books[i].title);
        scanf("%lf", &books[i].price);
        getchar();
    }
    struct book min, max;
    min = max = books[0];
    for(i=0; i<n; i++){
        if(min.price>books[i].price)
            min = books[i];
        if(max.price<books[i].price)
            max = books[i];
    }
    printf("%.2f, %s\n", max.price, max.title);
    printf("%.2f, %s", min.price, min.title);
    return 0;
}