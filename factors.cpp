#include <stdio.h>
void factor(int, int)
int main(){
	int num1, num2;
	scanf("%d%d", &num1,&num2);              			// Reading input from STDIN
	printf("Input number is %d %d.\n", num1,num2);  
	factor(int num1, int num2);
	// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

// Write your code here
void factor(int num1, int num2)
    int fac[100],fac1[100],value[100],i,j,k;
    for(i=0;i<num1;i++)
    {
        fac[i] = num1/i;
    }
     for(j=0;i<num2;j++)
    {
        fac1[j] = num1/j;
    }
    for(i=0,j=0,k=0;i<num1 && j<num2; i++, j++, k++)
    {
        if(fac1[i]==fac2[j])
        {
            value[k] = fac1[i];
        }
    }
    printf("The factors of are");
    
    for(k=0;k<num1;k++)
    {
        printf("%d",value[k]);
    }
}
