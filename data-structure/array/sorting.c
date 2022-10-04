#include<stdio.h>
int main(){
    char values[6] = {7,88,1,3,4,5};
    int n,i,j,t;
    n = sizeof(values);
    for(i=0; i<n; i++)
        printf("%d \n",values[i]);

    for(i = 0 ; i<n ; i++){
        for (j = 0; j<n ; j++){
            if(values[j] <= values[j+1]){
                t = values[j];
                values[j] = values[j+1];
                values[j+1] = t; 
            }
        }
    }

    printf("FInal one \n");
    for(int i=0; i<n; i++)
        printf("%d \n",values[i]);
    
}