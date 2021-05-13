#include<stdio.h>
#include<conio.h>
void selection_sort(int a[],int n)
{

    int i,j,pos,temp,small;
    for(i=0;i<n-1;i++)
    {

        small=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {

        if(a[j]<small)
        {


            small=a[j];
        pos=j;
        }
    }
    temp=a[pos];
    a[pos]=a[i];
    a[i]=temp;
}
}
void main()
{
    int n,a[10],i,temp;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the elements to be sorted:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    selection_sort(a,n);
    printf("the sorted elements are:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    getch();
}
