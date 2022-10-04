#include "stdio.h"
int main()
{
	char a[] = { 'A', 'B', 'C', 'D' };
	char* ppp = &a[0];
	*ppp++; // A
    *++ppp; // 
    printf("%c \n",*ppp);
    --*ppp;
    printf("%c \n",*ppp);

    // *ppp++; // Line 1
	// printf("%c %c \n", *++ppp, --*ppp); // Line 2
	// printf("%c \n",*ppp++); // Line 2
    // printf("%c \n",--*ppp); // Line 2

}
