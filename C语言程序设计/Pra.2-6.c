/* 练习 2-6 */
#include <stdio.h> 
int main(void)
{
	int g,h0,t,h1;
	
	g = 10;
	h0 = 100;
	t = 3;
	h1 = g*t*t/2;
	if(h1 <= h0){
		printf("物体下落高度为:%d",h1);
	}
	else{
		printf("物体下落高度为:%d",h0);
	}
	return 0;
}
