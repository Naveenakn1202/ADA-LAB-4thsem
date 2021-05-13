#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,temp,a[20];

    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the elements to be sorted:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=1;j<n;j++)
    {

        for(i=0;i<n-j;i++)
        {

            if(a[i]>=a[i+1])
            {

                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("the sorted elements are:");
    for(i=0;i<n;i++)
        printf("\n%d",a[i]);
    getch();

}
