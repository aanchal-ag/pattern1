#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(i+j==5)
				printf("a");
			else if((j-i)==3)
				printf("a");
			else if(i==3&&j>=2&&j<=6)
				printf("a");
			else
				printf(" ");
		}
		printf("\n");
	}
}
