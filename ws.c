#include<stdio.h>
void main();
{
 int n,t1=0,t2=1,i,next term;
 printf("enter the number of terms");
 scanf("%d",&n);
 printf("fibonacci series")
 for(i=1;i<=n;i++)
 {
  printf("%d",&n);
  next term=t1+t2;
  t1=t2;
  t2=next term;
  }
  return 0;
  }
