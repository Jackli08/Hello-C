#include<stdio.h>
#include<math.h>
int main(void)
{
	double x1,x2,x3,y1,y2,y3,s,area,p,a,b,c;
	
	printf("Enter the point:");
	scanf("%lf,%lf,%lf,%lf,%lf,%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	a = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
	b = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
	c = sqrt(pow(x1-x3,2) + pow(y1-y3,2));
	if(a+b<c||a+c<b||b+c<a){
		printf("Impossible!");
	}
	else{
		s = (a+b+c)/2;
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		p = a+b+c;
	}
	printf("The perimeetr is %.2f",area);
	
	return 0;
}
