#include<stdio.h>
#define N 10
 
int main()
{
  int i, j, n;
  int median, a[N], t;
 
  printf("Enter the number of items : "); 
  scanf("%d", &n);
 
  printf("\nInput %d values : ", n); 
  for(i=1; i<=n; i++) 
    scanf("%d", &a[i]);
 
  for(i=1; i<n; i++)
  {
    for(j=1; j<n; j++)
    {
        
        printf("Comparing those values : %d <= %d \n",a[j],a[j+1]);
      if(a[j]<=a[j+1]) {
        t=a[j]; // temp storage for exchange

        printf("value of a[%d] : %d \n",j,t);
        
        a[j]=a[j+1];  // a[4] = a[5]
        
        printf("value of a[%d] : %d \n",j,a[j]);
        
        a[j+1]=t; // a[5] = a[4]
        
        printf("value of a[%d] : %d \n",j+1,a[j+1]);
        
        printf("\n FINAL RESULT \n");
        
        for(i=1; i<=n; i++) 
            printf(" %d ", a[i]);
        
        printf("\n");

      }
      else {
          printf( " - failed - \n" );
          continue;
      }
   }
  }
 
  if(n%2 == 0)
    median=(a[n/2]+a[n/2+1])/2.0; 
 
  else
    median=a[n/2+1]; 
 
  for(i=1; i<=n; i++) 
    printf(" %d", a[i]);
 
  printf("\nMedian is %d", median);
 
  return 0;
}