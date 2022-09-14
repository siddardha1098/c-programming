#include<stdio.h>
struct studentdata
{
	char name[25];
	int rollno ;
	float marks ;
} s;
int main()
{  
printf("STORING INFORMATION");
	printf("\nENTER YOUR NAME:");
	scanf("%s",&s.name);
	printf("\nENTER YOUR ROLL NO:");
	scanf("%d",&s.rollno);
	printf("\nENTER YOUR MARKS:");
	scanf("%f",&s.marks);
	printf("DISPLAYING INFORMATION");
	printf("\nNAME= %s",s.name);
	printf("\nROLL NO=%d",s.rollno);
	printf("\nMARKS=%f",s.marks);
	return 0;
}
