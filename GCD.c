#include<stdio.h>
#include<conio.h>
int findgcd(int x,int y)
{
    while(x!=y)
{
if(x>y)
return findgcd(x-y,y);
else
return findgcd(x,y-x);
}
return x;
}
void main()
{
int n1,n2,gcd;

printf("/nenter the two numbers\n");
scanf("%d%d",&n1,&n2);
gcd=findgcd(n1,n2);
printf("gcd of %d and %d and is %d",n1,n2,gcd);
getch();
}
