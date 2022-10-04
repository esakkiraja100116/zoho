#include <stdio.h>
int main(){

    
    printf("\n");
    return 0;
}

void declare(){
     // array declaration
    int rollNo [10];

    // taking the input
    for(int i = 0; i<10; i++)
        scanf("%d",&rollNo[i]);

    for(int i = 0; i<10; i++)
        printf("%d",rollNo[i]);
}