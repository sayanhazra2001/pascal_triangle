#include<stdio.h>
int main()
{
	int n,i,j,c;
	printf("enter rows:	");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=1;j<=n-i-1;j++)
			printf("   ");
		for(j=0;j<=i;j++)
		{
			if(j==0)
				c=1;
			else c=c*(i-j+1)/j;
			printf("%8d",c);
		}
		printf("\n");
	}
}
