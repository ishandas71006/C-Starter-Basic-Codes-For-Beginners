#include <stdio.h>
int main(){
    float DegreeCelcius , Fahrenheit , F;

    printf("Enter Temperature in Degree :");
    scanf("%f",&DegreeCelcius);//Taking Input Of The Temperature In Degree Celcius

    F = 1.8*DegreeCelcius;
    Fahrenheit = F+32;//Calculating Fahrenheit with F=1.8*C+32

    printf("Given Temperature in Fahrenheit is %f",Fahrenheit);//Printing The Final Output
    return 0;


}