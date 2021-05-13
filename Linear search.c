#include<stdio.h>
#include<conio.h>
int search(int key,int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
if(a[i]==key)
return i+1;
}
return 0;
}
void main()
{
int n,key,i,pos,a[20];
printf("enter the value of n:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key elements to be searched:");
scanf("%d",&key);
if(pos==0)
printf("\n element not found");
else
printf("element found at position: %d",pos);
getch();
}
