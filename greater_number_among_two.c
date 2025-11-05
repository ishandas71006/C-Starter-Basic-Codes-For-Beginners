#include <stdio.h>
int main(){
    float num1 , num2;

    printf("Enter first number :");
    scanf("%f",&num1);//Inputing first number

    printf("Enter second number :");
    scanf("%f",&num2);//Inputing second number

    if(num1>num2){
        printf("The greater number is %f",num1);
    }
    else if(num2>num1){
        printf("The greater number is %f",num2);
    }
    else if(num1==num2){
        printf("Both %f and %f are equal",num1,num2);
    }
}