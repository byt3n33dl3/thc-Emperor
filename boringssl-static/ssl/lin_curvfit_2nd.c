#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define N 9

int main(){
    float x[9],y[9];
    float s1=0,s2=0,s3=0,s4=0,a1=0,a0=0,a=0,b=0; // s1 = sum of xi , s2 = sum of yi,  s3 = sum of xiyi, s4 = sum of xi^2
    printf("enter values xi yi: \n");

    for (int i = 0; i < N; i++)
    {
        scanf("%f %f",&x[i],&y[i]);

    }
    for (int i = 0; i < N; i++)
    {
        y[i] = log(y[i]+273.15);
    }
    

    for (int i = 0; i < N; i++)
    {
        s1 += x[i];
        s2 += y[i];
        s3 += x[i]*y[i];
        s4 += x[i]*x[i];
    }
    
    a0 = (float)((s4*s2)-(s1*s3))/((N*s4)-(s1*s1));

    a1 = (float)((N*s3)-(s1*s2))/((N*s4)-(s1*s1));

    b = -a1;
    a = exp(a0);

    printf("The final variables a and b are thus %f %f\n",a,b);
    return 0;
}

