#include <stdio.h>
 
int main()
{
   int a = 1;
   int b = 1;
   int c = a || --b;
   int d = a-- && --b;
   printf("%d %d %d %d \n",a,b,c,d); // 0 0 1 0

//    int d = a-- && b++;
//    printf("a = %d, b = %d, c = %d", a, b, c);
   return 0;
}