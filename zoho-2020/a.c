#include<stdio.h>
#include<stdlib.h>
enum{false,true};
int main(){
    int i = 1;
    do{
        printf("%d\n",i);
        i++;
        if(i<15)
            continue;
    }while(false);

    getchar();
}

// int main(){
//     int val= 1;
//     do{
//         val++;++val;
//     }while(val++ > 25);
//         printf("%d\n",val);
//     return 0;
// }