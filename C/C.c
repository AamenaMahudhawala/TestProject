#include<stdio.h>
void inputarray(int n,int *ar)
{
	printf("\nEnter the array:-");
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);

}
main()

{
int s;

printf("\nEnter lenth of array:-");
scanf("%d",&s);
countingarray(s);

}

void countingarray(int x)
{
	int ar[x],n;
	inputarray(x,ar);
	int i,c=0;

	printf("\nEnter the number:-");
	scanf("%d",&n);

	for(i=0;i<x;i++)
	{
		if(ar[i]==n)
			c+=1;
	}
	printf("The number %d occured %d times",n,c);
}




