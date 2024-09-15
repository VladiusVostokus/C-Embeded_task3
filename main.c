#include <stdio.h>
#include <stdlib.h>

char str1[30];
char str2[30];

int main() {
   printf("Enter string 1:");
   scanf("%s",str1);
   printf("Enter string 1:");
   scanf("%s",str2);
   printf("%s\n%s\n",str1, str2);
   return 0;
}

