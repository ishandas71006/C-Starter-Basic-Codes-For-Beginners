#include<stdio.h>
#include<math.h>
int main(){

    float sub1 , sub2 , sub3 ;
    float total , percent ;

    printf("Enter Physics Marks :\n");
    scanf("%f",&sub1);//Taking input of the first subject

    printf("Enter Chemistry Marks :\n");
    scanf("%f",&sub2);//Taking input of the second subject

    printf("Enter Maths Marks :\n");
    scanf("%f",&sub3);//Taking input of the third subject

    total = sub1 + sub2 + sub3 ;

    percent = (total/3);

    printf("Your percentage is %f\n",percent);
    
    if(percent>=33){
        printf("Hence , You're PASS");
    }
    else if(percent<33){
        printf("Hence , You're FAIL");
    }

    return 0;




}