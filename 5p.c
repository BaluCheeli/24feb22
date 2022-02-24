#include<stdio.h>
#define check (x&0x01)
int main(void)
{
	int x,count=0;
	printf("Enter value of \n");
	scanf("%d",&x);
	while(!check)
	{
		x=x>>1;
		count++;
	}
	printf("No.of trailing zeros in binary number - %d\n",count);
	return 0;
}
