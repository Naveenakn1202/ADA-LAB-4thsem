#include<stdio.h>
#include<conio.h>
void search(int key,int a[],int n,int *pos)
{
int low,high,mid;
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
*pos=mid;
return;
}
if(key<a[mid])
{
high=mid-1;
}
else
{
low=mid+1;
}
*pos=-1;
}
}
void main()
{
int i,n,a[20],pos,key;

printf("enter the value of n:");
scanf("%d",&n);
printf("enter the value of array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key element:");
scanf("%d",&key);
search(key,a,n,&pos);
if(pos==-1)
{
printf("key not found/n");
}
else
{
printf("key is found in position:%d\n",pos+1);
}
getch();
}
