#include <stdio.h>

char str1[30];
char str2[30];
char *ptr1 = str1;
char *ptr2 = str2;

int main() {
   printf("Enter string 1:");
   fgets(str1, sizeof(str1), stdin);
   printf("Enter string 2:");
   fgets(str2, sizeof(str2), stdin);

   while(1) {
      char char1 = *ptr1;
      char char2 = *ptr2;
      if (char1 != char2) {
         printf("These 2 strings are not equal\n");
         break;;
      }
      if (char1 == '\0' || char2 == '\0') {
         printf("These 2 strings are equal\n");
         break;
      }
      ptr1++;
      ptr2++;
   }
   //printf("%s\n%s\n%c",str1, str2, str1);
   return 0;
}

