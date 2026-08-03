#include<stdio.h> 
int main(void)
{
	int n,count,i;
	double score,totle;
	
	totle = 0;
	count = 0;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Enter score %d:",i);
		scanf("%lf",&score);
		totle = totle + score;
		if(score>=60){
			count++;
		}
	}
	printf("Average of the score is %.2f\n",totle/n);
	printf("Number of the passer is %d",count);
	return 0;
}
