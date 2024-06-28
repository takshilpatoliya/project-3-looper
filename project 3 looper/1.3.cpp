#include <stdio.h>

main()
{
	int n,z=0;
	
	printf("enter your  value N =");
	scanf("%d",&n);
	
	while(n!=0)
	{
		n/=10;
		z++;
	}
	printf(" the Total number of digits:- %d \n",z);
}