/*
Jumping statements:

break;
continue;
goto;


*/

#include<stdio.h>
int main()
{
	int i;
	
	for(i=1;i<=10;i++)
		{
			if(i==6 || i==9)
			{
				continue;
			}
			printf("%d\n",i);
			
		}
	
	return 0;
}


