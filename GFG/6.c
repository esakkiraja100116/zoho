#include <stdio.h>
int *A, stkTop;
int stkFunc (int opcode, int val)
{
    static int size=0, stkTop=0;
    switch (opcode)
    {
    case -1:
        size = val;
        break;
    case 0:
        // In 3d function 
        // stkTop value is changed in before loop , so it will be 0 ,Now 0<10
        // A[1] = 10;
        printf("Before case 0 : %d \n",stkTop);
        if (stkTop < size ) A[stkTop++]=val; // A[0] = 5;
        printf("After case  0 : %d \n",stkTop);
        break;
    default:
        if (stkTop) 
            printf("check %d \n",stkTop);
            return A[--stkTop];
    }
    return -1;
}

int main()
{
    int B[20];
    A=B;
    stkTop = -1;
    stkFunc (-1, 10); // size = 10
    stkFunc (0, 5);  // A[0] = 5;
    stkFunc (0, 10); // A[1] = 10; and it is assigned stkTop values is 2 here
    // stkFunc(1,0) it return A[1]
    // stkFunc(1,0) it return A[0]
    
    printf ("%d\n", stkFunc(1, 0)+ stkFunc(1, 0)); 
}