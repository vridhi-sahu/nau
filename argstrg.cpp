/*
4. Write a C program to input a string to reverse it.
*/
#include<stdio.h>
#include<string.h>
 
int main(int argc, char *argv[]) {
   char temp, *str;
   int i, j;
 
   if(argc!=2){
       printf("Invalid Usage.\n");
       return 1;
   }
    
   str = argv[1]; 
   i = 0; 
   j = strlen(str) - 1;
 
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
   printf(str);
   return 0;
}
    
