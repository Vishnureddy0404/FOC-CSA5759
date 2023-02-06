#include <stdio.h>
#include<math.h>
int main() 
{
    int year;
	printf("Enter an year: ");
	scanf("%d", &year); 
	if (year % 4 == 0)
	    printf("%d is leapyear.",year);
	else 
	    printf("%d is not a leapyear.", year);
	    return 0;
}
