#include<stdio.h>
#define check (x&0x80000000)
int main(void)
{
	int x,count=0;
	printf("Enter value of \n");
	scanf("%d",&x);
	while(!check)
	{
		x=x<<1;;
		count++;
	}
	printf("No.of trailing zeros in binary number - %d\n",count);
	return 0;
}

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{

long long n;
int i,c;
printf("enter the number\n");
scanf("%lld",&n);

c=0;
while()
{
c++;

}
printf("the leading number of zeros in %d are %d",n,c);

return 0;
}
*/
