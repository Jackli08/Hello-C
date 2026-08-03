#include<stdio.h> 
int main(void)
{
	int n,i,letter,space,number,others;
	char ch;
	
	letter=space=number=others=0;
	printf("Enter n:");
	scanf("%d",&n);
	getchar();
	printf("get %d charavters:",n);
	for(i=1;i<=n;i++){
		ch = getchar();
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
			letter++;
		}
		else if(ch>='0'&&ch<='9'){
			number++;
		}
		else if(ch==' '||ch=='\n'){
			space++;
		}
		else{
			others++;
		}
	}
	printf("letter=%d,space or enter=%d,number=%d,others=%d\n",letter,space,number,others);
	return 0;
}
