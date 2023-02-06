#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[100],n,h;
	printf("Enter the n values :");
	scanf("%d",&n);
	printf("Enter the %d elements: ",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	h=a[0];
	for (i=1;i<n;i++)
	{
		if (h<a[i])
		{
			h=a[i];
		}

	}
	printf("Maxium  number is :%d",h);
	getch();
}
