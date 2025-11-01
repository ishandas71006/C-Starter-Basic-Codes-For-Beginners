#include <stdio.h>
int main(){
    float Principalamt , Time , Rate , SI;

    printf("Enter Your Principal Amount :");
    scanf("%f",&Principalamt);//Input Principal Amount

    printf("Enter The Time Duration :");
    scanf("%f",&Time);//Input Time Duration

    printf("Enter The Rate Of Interest :");
    scanf("%f",&Rate);//Input Rate Of Interest

    SI = (Principalamt*Time*Rate)/100.0;//Calculating Simple Interest

    printf("The Simple Interest is : %f",SI);
    return 0;
}