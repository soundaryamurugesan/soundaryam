#include<stdio.h>
int main()
{
int n,r,sum;
printf("enter the armstrong number");
scanf(%d",&n);
while(n!=0)
{
 r=n%10;
 sum=sum+r*r*r;
 n=n/10;
 }
 }
