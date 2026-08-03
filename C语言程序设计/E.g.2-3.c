/* 将华氏温度转换为摄氏温度 */
#include <stdio.h> 
int main(void)
{
	/* celsius 表示摄氏度，fahr 表示华氏度 */
	int celsius,fahr;
	
	fahr = 150;
	celsius = 5*(fahr - 32)/9;
	
	printf("fahr = %d,celsius = %d\n",fahr,celsius);
	
	return 0;
}
