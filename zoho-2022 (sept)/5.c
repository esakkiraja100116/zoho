#include<stdio.h>
int main(){
    int a[5] = {5,1,15,20,25};
    int i,j,m;
    i = ++a[1]; // 2
    j = a[1]++; // 2
    m = a[i++]; // 20
    // printf("%d",i);
    printf("%d,%d,%d",i,j,m);
}