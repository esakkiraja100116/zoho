#include<stdio.h>

/*
    - b++ is (assign 5 > 4 is true) then b = 6
    
    (Example : Assume (i = 3) { i++ > 3 } is (assign 3>3 is false) then i = 4 )
    NOTE : Eventhough it is wrong it will also write in 
    memory because for comparing it needs to write and 
    check , then the checking is failed it won't go for 
    another condition (Some correction in the above statemenst)
    
    - c ++ is (assing 200> 200 is false) but the value is changed to 201
    beacasue it is checking and comparing 
*/

int main(){
    // int a =103;
    // int b = 5; 
    // int c = 200;
    // if( b++ > 4 && c++ > 200 && a++ >100 ){
    //     printf("high values");
    // }
    // printf(" %d %d  %d ",a,b,c);

    /** 

    For and operator both the value want's to be true Example : 1 = 1 
    Assingn a = 0 && b--; // it fails then 0,b_value decrement value

    */

    int a =3;
    int b = 0;
    // int result = a-- && b--; ans: 1
    // a = 1 && b--;
     // it won't check b++ because a = 0 AND operator need to both are != 0
    // a = 1 && b--;  // 1 and 5 example a = 0 means it exit while check the a = 0 , [ 0 and 6 ]
    // a = 1 || b++; very nice one is this (IMPORTANT TO UNDERSTAND THE FLOW OF C )
    // a++ && b--;
    // a++ && b++;
    b--;
    // b = 5 && a--;
    
    // a-- && b--;
    // b++ && b--;
    printf("%d %d : ",a,b);
    // if(a=233 && b--){
        // printf("checking");
    // }
    // printf(" %d %d",a,b);

}

