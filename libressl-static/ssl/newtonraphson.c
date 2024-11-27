#include<stdio.h>
#include<stdlib.h>
#include<math.h>
    // change your function y accordingly and its first derivative also 
    // f(x) = y = x^3 - 12

double y(double );
double y1(double );
int main(){
    double x0;
    
    printf("Enter nearest guess : ");
    scanf("%lf",&x0);

    double h = (double)-y(x0)/y1(x0);
    while(fabs(h)>0.000000001){
        x0 = x0 + h;
        h = (double)-y(x0)/y1(x0);
    }

    printf("The final root is %.16f \n",x0);
    printf("The value of y = f(x) = %.16f \n",y(x0));

    return 0;
}
double y(double a){
    double x = a;
    return x*x*x - 12;
}

double y1(double a){
    double x = a;
    return 3*x*x ; 
}