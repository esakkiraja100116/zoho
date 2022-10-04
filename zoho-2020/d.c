#include<stdio.h>
int main(){
    int i,j=3;
    float k =11; // it won't accept for modulo 7.0
    i = k%j;  // it takes the reminder from the division
    printf("%d",i);
    return 0;
}