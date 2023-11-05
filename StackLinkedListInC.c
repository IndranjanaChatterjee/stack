#include<stdio.h>
#include<stdlib.h>
#define MAX 5
typedef struct node
{
	int value;
	struct node *next;
}node;
void push(node **top,int val)
{
	node *ptr;
	ptr=(node *)(malloc(sizeof(node)));
	ptr->next=NULL;
	ptr->value=val;
	if((*top)==NULL)
	{
		(*top)=ptr;
	}
	else
	{
		ptr->next=(*top);
		(*top)=ptr;
	}
	
	
}
int pop(node **top)
{
	node *ptr;
	int val;
	ptr=(node *)(malloc(sizeof(node)));
	ptr=(*top);
	if(ptr==NULL)
	{
		printf("Empty");
		return(-1);
		
	}
	else
	{
		val=ptr->value;
		(*top)=ptr->next;
		free(ptr);
		return(val);
		
	}
	
}
int peek(node **top)
{
	node *ptr;
	int val;
	ptr=(node *)(malloc(sizeof(node)));
	ptr=(*top);
	if(ptr==NULL)
	{
		printf("Empty");
		return(-1);
		
	}
	else
	{
		val=ptr->value;
		
		return(val);
		
	}
	
}
void display(node **top)
{
	node *ptr;
	
	ptr=(node *)(malloc(sizeof(node)));
	ptr=(*top);
	if(ptr==NULL)
	{
		printf("Empty");
		
		
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("\n%d",ptr->value);
			ptr=ptr->next;
		}
	}
	
}
int main()
{
	int choice,value,give,popped;
	node *s,*p;
	s=NULL;
	do
	{
		printf("\nEnter 0 to push 1 to pop 2 to peek and 3 to display");
	    scanf("%d",&choice);
		switch(choice)
		{
			case 0:
				printf("\nEnter the value to be entered");
				scanf("%d",&value);
				push(&s,value);
				break;
			case 1:
				
				
				give=pop(&s);
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
				
				popped=peek(&s);
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
				p=s;
				display(&p);
				
				
				break;
				
		}
		
	}while(choice>=0 && choice<=3);
	return 0;
}