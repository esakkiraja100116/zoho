// I do this right in zoho 

#include<stdio.h>
int main(){
    int arr[]= {10,20,30,40,50};
    int c = 5;
    int i = 0;
    while(i<c){
        // int result =  i%2==0?i:i-1;
        // printf("%d",result);
        printf("%d \n",arr[i%2==0?i:i-1]);
        i++;
    }
}

// 0 