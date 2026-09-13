#include<stdio.h>
int main(){
    float fahrenheit, celsius;
    printf("Enter temperature in  fahrenheit:");
    scanf("%f",& fahrenheit);
    printf("Fahrenheit: %.2fF \n",fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("Celsius: %.2fC\n", celsius);
    return 0;
}
