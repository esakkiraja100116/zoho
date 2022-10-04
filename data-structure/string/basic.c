#include <stdio.h>
#include <string.h>
int main()
{
    
    print("\n");
    return 0;
}

void input()
{
    char name[30];
    printf("Enter the name you like : ");
    scanf("%[^\n]", name);
    // fgets(name,sizeof(name),stdin); // read the string direclty from the console
    printf("The name is : %s", name);
    // puts(name);
}

void compare(){
    char c[20] = "c string2";
    char d[20] = "c string2";
    char temp[20];
    int result;
    result = strcmp(c,d);
    if(result == 0){
        printf("fine");
    }else{
        printf("different");
    }
}

void length(){
    /**
     * @brief 
     * %s - is for string
     * %d - is for int (base 10), %zu or %lu is for long unsigned int
     * 
     */
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    // using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n",strlen(a));
    printf("Length of string b = %lu \n",sizeof(b));
    
    printf("\n");
}

void join_string(){
    char str1[100] = "This is ", str2[] = "programiz.com";

   // concatenates str1 and str2
   // the resultant string is stored in str1.
   strcat(str1, str2);

   puts(str1);
}