#include<stdio.h>
#include<conio.h>
int main()
{
     int n, num, digit, rev = 0, sum=0;

     printf("Enter a positive number: ");
     scanf("%d",&num);

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
     printf("The number is %d\n",n);
     printf("The reverse of the number is %d\n",rev);
     printf("The sum of digits is %d\n",sum);
     return(0);
}

