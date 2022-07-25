#include<stdio.h>

int getValues()
{
		int i;
	
	i=1;
	
	xyz:
	if(i<=10)
	{
		printf("%d\n",i);//1 2
		i++;	//1 ==> 11
	}
	
	goto xyz;
}

int main()
{
	getValues();
	return 0;
}