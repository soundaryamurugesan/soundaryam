#include<stdio.h>
int main()
{
 int i,t1=0;t2=1,next term;
 printf("enter the number of series");
 scanf("%d",&n);
 printf("fibonacci series");
 for(i=0;i<=n;i++)
 {
 printf("%d",t1);
 next term=t1+t2;
 t1=t2;
 t2=next term;
 }
 return 0;
 }
