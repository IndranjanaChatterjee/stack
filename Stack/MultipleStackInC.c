#include<stdio.h>
#include<conio.h>
#define MAX 10
int n,topA=-1,topB=MAX;

int stack[MAX];
void pushA(int stack[],int val)
{
	if(topA==(topB-1))
	{
		printf("Overflows");
	}
	else
	{
		topA+=1;
		stack[topA]=val;
	}
	
}
void pushB(int stack[],int val)
{
	if(topA==(topB-1))
	{
		printf("Overflows");
	}
	else
	{
		topB-=1;
		stack[topB]=val;
	}
	
}
int popA(int stack[])
{
	if(topA==-1)
	{
		printf("\n Underflows");
		return(-1);
	}
	else
	{
		int ele;
		ele=stack[topA];
		topA-=1;
		return(ele);
	}
	
}
int popB(int stack[])
{
	if(topA==MAX)
	{
		printf("\n Underflows");
		return(-1);
	}
	else
	{
		int ele;
		ele=stack[topB];
		topB+=1;
		return(ele);
	}
	
}
int peekA(int stack[])
{
	if(topA==-1)
	{
		printf("\n Underflows");
		return(-1);
	}
	else
	{
		int ele;
		ele=stack[topA];
		
		return(ele);
	}
	
}
int peekB(int stack[])
{
	if(topB==MAX)
	{
		printf("\n Underflows");
		return(-1);
	}
	else
	{
		int ele;
		ele=stack[topB];
		
		return(ele);
	}
	
}
void displayA(int stack[])
{
	if(topA==-1)
	{
		printf("\n Underflows");
		
	}
	else
	{
		int i;
		for(i=topA;i>=0;i--)
		{
			printf("\n%d",stack[i]);
		}
	}
	
}
void displayB(int stack[])
{
	if(topB==MAX)
	{
		printf("\n Underflows");
		
	}
	else
	{
		int i;
		for(i=topB;i<MAX;i++)
		{
			printf("\n%d",stack[i]);
		}
	}
	
}
int main()
{
	int choice,value,give,popped;
	
	do
	{
		printf("\nEnter 0 to push in Stack A  ,1 to push in Stack B,2 to pop from Stack A,3 to pop from Stack B,4 to peek from Stack A,5 to peek from Stack B,6 to display Stack A and 7 to display Stack B");
	    scanf("%d",&choice);
		switch(choice)
		{
			case 0:
				printf("\nEnter the value to be entered in Stack A");
				scanf("%d",&value);
				pushA(stack,value);
				break;
			case 1:
				printf("\nEnter the value to be entered in Stack B");
				scanf("%d",&value);
				pushB(stack,value);
				break;
			case 2:
				
				
				give=popA(stack);
				if(give!=-1)
				{
				
				printf("\nthe value popped from A:%d",give);
			    }
			    else
			    {
			    	printf("Enpty");
				}
				
				
				break;
			case 3:
				
				
				give=popB(stack);
				if(give!=-1)
				{
				
				printf("\nthe value popped from B:%d",give);
			    }
			    else
			    {
			    	printf("Enpty");
				}
				
				
				break;
			case 4:
				
				popped=peekA(stack);
				if(popped!=-1)
				{
				
				printf("\nthe value peeked from A: %d",popped);
			    }
			    else
			    {
			    	printf("Enpty");
				}
				
				
				break;
			case 5:
				
				popped=peekB(stack);
				if(popped!=-1)
				{
				
				printf("\nthe value peeked from B: %d",popped);
			    }
			    else
			    {
			    	printf("Enpty");
				}
				
				
				break;
			case 6:
				
				displayA(stack);
				
				
				break;
			case 7:
				
				displayB(stack);
				
				
				break;
				
		}
		
	}while(choice>=0 && choice<=7);
	return 0;
}