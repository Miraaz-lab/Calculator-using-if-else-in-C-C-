#include <stdio.h>  

int main()  
{  
    float num1,num2;
    char a;
    
    start:
    printf(
    "\n1.'+'Addition"
    "\n2.'-'Substraction"
    "\n3.'*'Multiplication"
    "\n4.'/'Division");
    printf("\nEnter the task you want to do  \n");
    scanf("%c",&a);
    
    printf("Enter first value:\n");
    scanf("%f",&num1);
    
    printf("Enter second value:\n");
    scanf("%f",&num2);
    
    if (a=='+')
    printf("sum of both number is: %.3f\n",num1+num2);
    
    else if(a=='-')
    printf("substraction of values is: %.3f\n",num1-num2);
    
    else if(a=='*')
    printf("multiplication of values is: %.3f\n",num1*num2);
    
    else if (a=='/')
    printf("division of values is: %.3f\n",num1/num2);
   
    else {
    printf("\nplease select proper oprator\n:");
    scanf("%c",&a);
    goto start;
    }
    return 0;
}
