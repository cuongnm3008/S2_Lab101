#include <stdio.h>
#include <string.h>
 #include<stdlib.h>
void string_reverse(char str[]) {
   int i, j, len;
   char ch;
   j = len = strlen(str) - 1;
   i = 0;
   while(i < j) {
      ch = str[j];
      str[j] = str[i];
      str[i] = ch;
      i++;
      j--;
   }
}
int main (void) {
   while(1){
   char s1[100],c ;
   printf("\nPlease enter string:  ");
   //fpurge(stdin);
   fflush(stdin);
   gets(s1);
   char reverse[100] = "";
   char temp[50];
   int i, j, n;
   n = strlen(s1);
   for(i = n-1; i >= 0; --i) {
      for(j = 0; i >= 0 && s1[i] != ' '; --i,++j)
         temp[j] = s1[i];
      	temp[j] = '\0';
 
      string_reverse(temp);
      strcat(reverse, temp);
      strcat(reverse, " ");
   }
   printf("The old string: %s", s1);
   printf("\nThe reversed string: %s",reverse);
   printf("\nDo you want to return the main menu (Y/N): ");
        //fpurge(stdin);
        fflush(stdin);
		c = getchar();
        if (c == 'N'||c=='n') 
		{
            break;
        }
   }
   
}
