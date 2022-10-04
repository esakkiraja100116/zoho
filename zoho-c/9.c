// Need to debug with this 

#include<stdio.h>
enum lanugage{
    C,Java=3,Python,PHP
};

void main(){
    float arr[C+PHP] = {1.0f,2.1f,3.2f,4.3f,5.4f};
    enum lanugage lang=  Python;
    printf("%.1f",arr[lang>>1+1]);
}