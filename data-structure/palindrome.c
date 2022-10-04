#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    int i, length,temp;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%[^\n]s", string1);
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        printf("checking %c and %c ...... \n",string1[i],string1[length-i-1]);
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            
            break;
        }
    }
    
    if (flag) {
        printf("%s is not a palindrome \n", string1);
    }    
    else {
        printf("%s is a palindrome \n", string1);
    }
    return 0;
}






