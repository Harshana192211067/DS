#include <stdio.h>
int main() {
 int n, a, b, next,sum=0;
 printf("Enter the value of n: ");
 scanf("%d", &n);
 printf("Fibonacci series: ");
 printf("0 1 "); 
 a = 0;
 b = 1;
 next = a + b;
 while (next <= n) {
 printf("%d ", next);
 a = b;
 b = next;
 next = a + b;
 sum=sum+next;
  }
 printf("\n%d",sum);
}

