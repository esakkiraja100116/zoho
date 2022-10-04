#include <stdio.h>
int main()
{
    // It reads the null charachter for every string
    char str3[] = "hi"; // 3
    char *str1 = "helow rold";  // confuse
    char str2[] = "GeeksQuiz"; // 10
 
    printf("sizeof(str1) = %lu, sizeof(str2) = %lu",
           sizeof(str3), sizeof(str1));
 
    return 0;
}