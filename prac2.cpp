#include <stdio.h>
 
int main()
{
 int var;  /*Suppose address of var is 2000 */
 
 int *ptr = &var;
 *ptr = 5;
 printf("var=%d and *ptr=%d",var,*ptr);
              
 return 0;
}
