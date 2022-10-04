#include<stdio.h>

void fun(int n,int m){
    printf("Enter into the condition : %d %d \n",n,m);
    if(n>0){
        fun(--n,++m);
        printf("%d %d\n",n,m);
        fun(--n,++m);
    }
}

int main(){
    int a=2;
    fun(a,a);
    return 0;
}