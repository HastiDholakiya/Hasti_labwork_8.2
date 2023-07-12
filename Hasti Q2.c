#include<stdio.h>

void main()
{
	int n1,n2;
	
	printf("Enter a year to start the leap year: ");
	scanf("%d",&n1);
	
	printf("Enter a year to end the leap year: ");
	scanf("%d",&n2);
	
	printf("Leap years between %d to %d are: \n");
	
	for(n1=n1;n1<=n2;n1++)
	{
	   if(n1%4==0)
	   {
	   	printf("%d \n",n1);
	   }
    }
    
	
}
