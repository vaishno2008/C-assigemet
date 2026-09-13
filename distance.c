#include<stdio.h>
int main(){
    float speed,time;
    printf("Enter speed in km/h:");
    scanf("%f",&speed);
    printf("Enter time in hours:");
    scanf("%f",&time);
    
    float distance=speed*time;
    
    float meters, centimetres, millimetres;
    printf("Distance in meters:%.2f m\n", distance* 1e3);
    printf("Distance in centimetres:%.2f cm\n",distance* 1e5);
    printf("Distance in millimetres:%.2f mm\n",distance* 1e6);
    return 0;
}

