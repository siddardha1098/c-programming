#include<stdio.h>
struct stud
{
  int nam;
  int obtain_mark;
  int per;
  char grad[5];
};
struct stud s[5];
int i;
int main()
{
	char a,A;
	int n;
	int counta=0,countb=0,countc=0,countd=0,countf=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	if(n>0)
	{
 		for(i=1; i<=n; i++)
 		{
  			printf("Enter %d roll number: ",i);
  			scanf("%d",&s[i].nam);
  			printf("Enter %d student obtained marks = ",i);
  			scanf("%d",&s[i].obtain_mark);
 		}
 		for(i=1; i<=n; i++)
   		s[i].per=s[i].obtain_mark;
   		printf("\n");
 		for(i=1; i<=n; i++)
 		{
 			if(s[i].per>=0)
 			{
  			if(s[i].per>=90 )
  			{
  				printf("Roll number= %d\n",s[i].nam);
    			printf("student %d got A grade\n",i);
    			printf("------\n");
    			counta++;
			}
  			else if(s[i].per>=80 && s[i].per<90)
  			{	
  				printf("Roll number= %d",s[i].nam);
    			printf("\nstudent %d got B grade\n",i);
    			printf("------\n");
    			countb++;
			}
  			else if(s[i].per>=70)
  			{
  				printf("Roll number= %d",s[i].nam);
    			printf("\nstudent %d got C grade\n",i);
    			printf("------\n");
    			countc++;
    		}
  			else if(s[i].per>=51)
  			{
  				printf("Roll number= %d",s[i].nam);
    			printf("\n student %d got D grade\n",i);
    			printf("------\n");
    			countd++;
			}
  			else
			{
			  	printf("Roll number= %d",s[i].nam);
			    printf("\nstudent %d got F grade\n",i);
			    printf("------\n");
			    countf++;
			}
			printf("\nThe total Count of Grade:");
 			printf("\n\n A grade=%d\n ",counta);
			printf("B grade=%d\n ",countb);
			printf("C grade=%d\n ",countc);
			printf("D grade=%d\n ",countd);
			printf("F grade=%d\n ",countf);
		}
		else 
		{
			printf("Invalid input");
		}
		}
	}
	else 
	{
		printf("Invalid Input");
	}
 	return 0;
}
