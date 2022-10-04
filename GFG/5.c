#include<stdio.h>
#include<stdlib.h>
void f(int *p, int *q,int *r) // 0 - 1
{
  p = q;
 *p = 5;
 printf("value of p : %d \n",*p);
 printf("value of q : %d \n ",*q);
}
int i = 0, j = 7,k = 2;
int main()
{
  f(&i, &j, &k);
  printf("%d %d %d \n", i, j, k);
  getchar();
  return 0;
}