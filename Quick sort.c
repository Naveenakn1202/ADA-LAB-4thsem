#include <stdio.h>
#include<time.h>
#include<math.h>

void quick_sort(int[],int,int);
int partition(int[],int,int);

int main()
{
	int a[50],n,i;
	clock_t c1,c2;
	float f;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("\nEnter %d elements:\n",n);
 	for(i=0;i<n;i++)
       a[i]=rand()%(1-100+1)+1;
    for(i=0;i<n;i++)
    	printf("%d\n",a[i]);
	c1=clock();
	Sleep(100);
	quick_sort(a,0,n-1);
	c2=clock();
	f=c2-c1;
	printf("\n Elements sorted after using Quick Sort Algorithm\n");
	for(i=0; i<n; i++)
		printf("%d\n",a[i]);
	printf("Time taken to sort %f m/s",f);
	return 0;
}

void quick_sort(int a[],int l,int u)
{
	int j;
	if(l<u)
		{
			j=partition(a,l,u);
			quick_sort(a,l,j-1);
			quick_sort(a,j+1,u);
		}
}

int partition(int a[],int l,int u)
{
	int v,i,j,temp;
	v=a[l];
	i=l;
	j=u+1;
	do
		{
			do
				i++;
			while(a[i]<v&&i<=u);
			do
				j--;
			while(v<a[j]);
			if(i<j)
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
		}
	while(i<j);
	a[l]=a[j];
	a[j]=v;
	return(j);
}
