/* 练习2-15 */
#include <stdio.h> 

int main(void)
{
	int denominator,flag,n,i;
	double sum,item;
	
	denominator = 1;
	sum = 0;
	flag = +1;
	printf("Enter n(n>0):");
	scanf("%d",&n);
	if(n>0){
		for(i=1;i<=n;i++){
			item = flag*1.0/denominator;
			denominator = denominator + 3;
			flag = -flag;
			sum = sum + item;
		}
		printf("前%d项的和为:%.3f\n",n,sum);
	}
	else{
		printf("Invalid Value!");
	}
	return 0;
}
