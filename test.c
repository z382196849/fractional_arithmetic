#include<stdio.h>

int main()
{
	int i = 0;
	float sum = 0;
	int flag = 1;
	for(i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%f", sum);
	getchar();
	return;
}