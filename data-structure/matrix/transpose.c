#include<stdio.h>
void temp();
int main()
{
    int a[3][2],b[2][3], i, j; 
    //printf("value of i ---> %d \n",i);
    //take user input
    printf("Enter value for matrix: \n"); 
    j = 0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++) 
            // printf("Enter value for matrix %d , %d : \n",i,j); 
            scanf("%d",&a[i][j]);
    }
 
    printf("Matrix:\n"); 
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++) 
        printf(" %d ",a[i][j]); 
        printf("\n");
    }

    for(i=0; i<3; i++){
        for(j=0 ; j<2 ; j++){
            b[j][i] = a[i][j];
        }
    }

    //print transposed matrix
    printf("Transpose matrix:\n"); 
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++) 
        printf(" %d ", b[i][j]); 
        printf("\n");
    }

    // temp();
  return 0;
}

void temp(){
    int a[3][2],b[2][3], i, j; 
  
  //take user input
  printf("Enter value for matrix: "); 
  for(i=0;i<3;i++)
  {
    for(j=0;j<2;j++) 
    //   printf("%d %d",i,j);
      scanf("%d",&a[i][j]);
  }
      //print origional matrix
  printf("Matrix:\n"); 
  for(i=0;i<3;i++)
  {
    for(j=0;j<2;j++) 
      printf(" %d ",a[i][j]); 
    printf("\n");
  }
  
  //find the transpose of the matrix
  for(i=0; i<3; i++)
  {
    for(j=0; j<2; j++) 
      b[j][i] = a[i][j];
  }
  
  //print transposed matrix
  printf("Transpose matrix:\n"); 
  for(i=0; i<2; i++)
  {
    for(j=0; j<3; j++) 
    printf(" %d ", b[i][j]); 
    printf("\n");
  }
}