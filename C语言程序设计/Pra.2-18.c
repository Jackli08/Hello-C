#include <stdio.h>
double fact(int n);
double fact(int n)
{
	int i;
	double product;
	product = 1;
	for(i=1;i<=n;i++){
		product=product*i;
	}
	
	return product;
}

int main(void)
{
	int n,m,i;
	double result;
	
	printf("Enter n(n>=m):");
	scanf("%d",&n);
	printf("Enter m(m<=n):");
	scanf("%d",&m);
	if(n>=m){
		result = fact(n)/(fact(m)*fact(n-m));
		printf("C(%d,%d)=%.0f\n",n,m,result);
	}
	
	else{
		printf("Invalid Value!");
	}
	
	return 0;
}
