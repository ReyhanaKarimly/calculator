#include <stdio.h>
#include <conio.h>
int main()
{
	float a,b;
	char mode;
	printf("Enter the first number: ");
	scanf("%f", &a);
	printf("Enter the operator: ");
	scanf("\n%c", &mode);
	printf("Enter the second number: ");
	scanf ("%f", &b);
		if (mode=='+')
		{
			printf("\nsum=%.2f+%.2f=%.2f", a,b,a+b);
		}
		else if (mode=='-')
		{
			printf("\ndifference=%.f-%.f=%.f", a,b,a-b);
		}
		else if(mode=='*')
		{
			printf("\nproduct=%.2f*%.2f=%.2f", a,b,a*b);
		}
		else if (mode=='/' && b!=0)
		{
		printf("\nratio=%.2f/%.2f=%.2f",a,b,a/b);
		}
		else if (mode=='/' && b==0)
		{
		printf("ERROR! 'a/0'");
		}
		else
                printf("Wrong operator!");
		getch();
		return 0;
		
}
