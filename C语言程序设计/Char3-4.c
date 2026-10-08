#include<stdio.h>
int main(void)
{
	int n,i,numA,numB,numC,numD,numE;
	double score;
	
	numA=numB=numC=numD=numE=0;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Enter score %d:",i);
		scanf("%lf",&score);
		if(score>=90){
			numA++;
		}
		else if(score>=80){
			numB++;
		}
		else if(score>=70){
			numC++;
		}
		else if(score>=60){
			numD++;
		}
		else{
			numE++;
		}
	}
	printf("A=%d,B=%d,C=%d,D=%d,E=%d\n",numA,numB,numC,numD,numE);
	
	return 0;
}
