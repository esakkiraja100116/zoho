#include<stdio.h>

int main(){

    int a[50],i,j,t,n;
    /*
        - a is to store all the given values 
        - i and j for loop
        - t is temp storage
        - n is for number of item that stored in variable ( @var = a )
    */

    printf("Enter the number of element : ");
    scanf("%d",&n);

    printf("Enter the values to sort : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("stored values a : \n");
    for(i=0;i<n;i++)
        printf("%d \n",a[i]);

    printf(" \n ::::: GOING TO SORT THE VALUES ::::: \n ");

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i] > a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    printf("sorted values a : \n");
    for(i=0;i<n;i++)
        printf("%d \n",a[i]);
}