#include<stdio.h>
int main()
{
	printf("Enter the number of discs");
	int n;
	scanf("%d",&n);
	towerHanoi(n,'a','b','c');
}
void towerHanoi(int n,char start,char aux,char dest)
{
	if(n==1)
	{
		printf("\nMove from %c to %c",start,dest);//if only 1 disc then no middle steps required
		
	}
	else
	{
		towerHanoi(n-1,start,dest,aux);
		towerHanoi(1,start,aux,dest);
		towerHanoi(n-1,aux,start,dest);
	}
}