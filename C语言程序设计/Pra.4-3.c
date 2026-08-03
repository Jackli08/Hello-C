#include<stdio.h>
#include<math.h>
int main(void)
{
	double item,sum,eps;
	int i,flag,deno;
	
	printf("Eps=");
	scanf("%lf",&eps); 
	sum = 0.0;
	item = 1.0;
	flag = +1;
	deno = 1;
	while(fabs(item)){
		sum += item;
		flag *= -1;
		deno += 3;
		item = flag*1/deno;
	}
	printf("Sum is %lf",sum);
	
	return 0;
} 
