#include<stdio.h>

int main() {
   int x, y, t1;
   printf("Enter the value of x and y: ");
   scanf("%d %d", &x, &y);
   printf("Before swapping x=%d, y=%d ", x, y);
    
   t1 = x;
   x = y;
   y = t1;
   printf("After swapping x=%d, b=%d", x, y);
   return 0; 
}
