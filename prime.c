#include<stdio.h>
main()
{
	int i,num;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			break;
	}
	if(num==i)
		printf("the num is prime\n");
else
printf("not prime\n");
}
