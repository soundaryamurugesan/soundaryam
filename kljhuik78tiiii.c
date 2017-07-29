#include<stdio.h>
int main
{
char string1[10],string[10];
int i,temp=0;
printf("enter the string1 value");
get(string1);
printf("enter the string2 value");
get(string2);
for(i=0;string1[i]!='\o';i++)
{
if(string1[i]=string2[i])
 temp=1;
 else
 temp=0;
 }
 if(temp==1)
 {
  printf("enter both string are same");
  else
  printf("enter both string are not same");
  getch();
  }
  }
