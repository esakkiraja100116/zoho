#include<stdio.h>
int r();
int main(){
    for(r();r();r()){
        printf("%d \n",r());
    }
    // printf("%d",r());
    return 0;
}

int r(){
    int static num = 7;
    printf("Callling the function %d \n" ,num);
    // num--;
    // printf("Infunction %d",num--);
    return num--; // num = 7
    // num = 6
    // 
    //  printf("Infunction %d",num--);
}