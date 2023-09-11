#include<stdio.h>
#include<conio.h>
#define MAX 5
int n,top=-1;

int stack[MAX];
void push(int stack[],int val)
{
	if(top==(MAX-1))
	{
		printf("Overflows");
	}
	else
	{
		top+=1;
		stack[top]=val;
	}
	
}
int pop(int stack[])
{
	if(top==-1)
	{
		printf("\n Underflows");
		return(-1);
	}
	else
	{
		int ele;
		ele=stack[top];
		top-=1;
		return(ele);
	}
	
}
int peek(int stack[])
{
	if(top==-1)
	{
		printf("\n Underflows");
		return(-1);
	}
	else
	{
		int ele;
		ele=stack[top];
		
		return(ele);
	}
	
}
void display(int stack[])
{
	if(top==-1)
	{
		printf("\n Underflows");
		
	}
	else
	{
		int i;
		for(i=top;i>=0;i--)
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
		printf("\nEnter 0 to push 1 to pop 2 to peek and 3 to display");
	    scanf("%d",&choice);
		switch(choice)
		{
			case 0:
				printf("\nEnter the value to be entered");
				scanf("%d",&value);
				push(stack,value);
				break;
			case 1:
				
				
				give=pop(stack);
				if(give!=-1)
				{
				
				printf("\nthe value popped:%d",give);
			    }
			    else
			    {
			    	printf("Enpty");
				}
				
				
				break;
			case 2:
				
				popped=peek(stack);
				if(popped!=-1)
				{
				
				printf("\nthe value peeked: %d",popped);
			    }
			    else
			    {
			    	printf("Enpty");
				}
				
				
				break;
			case 3:
				
				display(stack);
				
				
				break;
				
		}
		
	}while(choice>=0 && choice<=3);
	return 0;
}