#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 1000

double f(double );
int main(){
    double sum1,sum2,x[N],h,I;
    printf("enter the domain : \n");
    scanf("%f %f",&x[0],&x[N-1]);

    h = (x[N-1] - x[0])/N;
    printf("%f \n",h);  // debug 
    printf("%f \n",f(x[N-1]));  // debug 
    printf("%f \n",f(x[0]));  // debug 
    // h = 0.001;
    sum1 = 0;
    sum2 = 0;
    
    for (int i = 1; i <= N-2; i = i+2)
    {
        sum1 += f(x[0]+(i*h));
    }

    for (int i = 2; i <= N-3; i = i+2)
    {
        sum2 += f(x[0]+(i*h));
    }

    printf("%f \n",sum1);  // debug 
    I = (h*0.333333334)*(f(x[0])+f(x[N-1]))+((2*sum1))*h*(0.666666667) + (2*sum2)*(h*0.3333333334);

    printf("This is the integral : %f\n",I);

    

    return 0;
}

double f(double x){
    return x*x;
    //return sin(x);
    //return sin(x);
}