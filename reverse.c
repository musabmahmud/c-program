#include <stdio.h>

int reverse(int);

int main()
{
   int n, r;

   scanf("%d", &n);

   r = reverse(n);

   printf("%d\n", r);

   return 0;
}

int reverse(int n) {
   static int r = 0;

   if (n == 0)
      return 0;

   r = r * 10;
   r = r + n % 10;
   reverse(n/10);
   return r;
}
