// Write a program to check BMI index of a person and print BMI value as per the range.

#include<stdio.h>
int main(){

    float W,H,BMI;
    printf("Enter Height (in meters)=");
    scanf("%f",&H);
    printf("Enter Weight (in kg)=");
    scanf("%f",&W);

    BMI=W/(H*H);

    printf("BMI is %f \n",BMI);

    if(BMI<15){
        printf("Starvation");
    }else if(BMI>=15 && BMI<=17.5){
        printf("Anorexic");
    }else if(BMI>17.5 && BMI<=18.5){
        printf("Underweight");
    }else if(BMI>18.5 && BMI<=24.9){
        printf("Ideal");   
    }else if(BMI>24.9 && BMI<=25.9){
        printf("Overweight");
    }else if(BMI>25.9 && BMI<=39.9){
        printf("Obese");
    }else if(BMI>39.9){
        printf("Morbidity Obese");
    }
        return 0;
}