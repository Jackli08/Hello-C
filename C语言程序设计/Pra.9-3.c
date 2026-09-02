#include<stdio.h>
#include<math.h>
struct vector
{
    double x, y;
};
int main()
{
    struct vector a, b, c;
    scanf("%lf%lf%lf%lf", &a.x, &a.y, &b.x, &b.y);
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    if(fabs(c.x)<0.05)
        c.x = 0.0;
    if(fabs(c.y)<0.05)
        c.y = 0.0;
    printf("(%.1f, %.1f)", c.x, c.y);
    return 0;
}