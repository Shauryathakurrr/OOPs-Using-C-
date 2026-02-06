// #wap to prepare arithmetic operations using c
#include<stdio.h>
int main() {
    int x,y , sum=0 , sub=0 , mul=0 ;
    float div=0.0 ;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y); 
    sum = x + y ;
    sub = x - y ;
    mul = x * y ;   
    div = (float)x / (float)y ;
    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mul);
    printf("Division: %.2f\n", div);
    return 0;
}