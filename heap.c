#include<stdio.h>
#include<stdlib.h>

int heap[100];
int top=0;

void insert(int a)
{
	heap[++top]=a;
	int i=top;
	while((i/2 > 0) && (heap[i] > heap[i/2]))
	{
		int t;
		t=heap[i];
		heap[i]=heap[i/2];
		heap[i/2]=t;
		i=i/2;
	}
	return;
}

int main()
{
	int n,i,a,j;
	printf("Enter number of digits: ");
	scanf("%d",&n);
	printf("Enter numbers to be inserted:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		insert(a);
	}
	for(j=1;j<=n;j++)
	{
		printf("%d ",heap[j]);
	}
	printf("\n");
	return 0;
}
