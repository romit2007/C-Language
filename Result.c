#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;

	printf("Enter marks: ");
	scanf("%d",&marks);

	if(marks>70)
	{
		printf("A1");
	}
	else if(marks>60)
	{
		printf("B1");
	}
	else if(marks>50)
	{
		printf("C1");
	}
	else
	{
		printf("Fail");
	}



	getch();
}