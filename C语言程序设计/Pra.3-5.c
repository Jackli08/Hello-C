#include<stdio.h>
int main(void)
{
	int year,i;
	
	
	printf("Enter the DDL of the year:");
	scanf("%d",&year);
	printf("The all leap years are:\n");
	for(i=2000;i<=year;i++){
		if((i%4==0&&i%100!=0)||(i%400==0)){
			printf("%d\n",i);
		}
	}
	return 0;
}
