#include<stdio.h>
int main()
{
	int n,i,j;
	char ch;
	printf("\n enter the character:");
	scanf("%c",&ch);
	printf("\n enter the number :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
		}
	    printf("\n");
	}
	return 0;
}
