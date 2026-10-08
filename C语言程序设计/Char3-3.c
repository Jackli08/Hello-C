#include<stdio.h>
int main(void)
{
	double mile,money=0.0;
	int min=0;
	printf("Enter kilometers and waiting minutes:");
	scanf("%lf%d",&mile,&min);
	if(mile<=3){
		money += 10;
	}
	else if(mile<=10){
		money += 10+(mile-3)*2;
	} 
	else{
		money += 24+(mile-10)*3;
	}
	if(min>=5)
		money += (min/5)*2;
	int totle = (int)(money + 0.5);
	printf("Fee is %d\n",totle);
	
	return 0;
}
