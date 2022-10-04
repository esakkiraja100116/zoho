#include <stdio.h>
#include <string.h>
int main(){
    int n;
    int sum,val;
    char dummy[50];
    scanf("%s",dummy);
    n = strlen(dummy);

    // printf("%d",n);
    for(int i=0;i<=n-1;++i){
        printf("%d ------ %c \n",i,dummy[i]);
    }

    val = (int)dummy[0];
    if(strcmp("*",dummy)){
        printf("yes equal");
    }
}