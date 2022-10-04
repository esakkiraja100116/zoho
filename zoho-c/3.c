#include<stdio.h>
int main(){
    int a = 100,b = 74;
    if(a++ > 100 && b++ > 200)
        printf("Hight values with a = %d b = %d",a,b);
    
    if(a++ < 100 || b++ <200)
        printf("Low values with a = %d b = %d",a,b);
}