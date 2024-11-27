#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 10

int main(){
    float x[10],y[10];
    float s1=0,s2=0,s3=0,s4=0,a1=0,a0=0; // s1 = sum of xi , s2 = sum of yi,  s3 = sum of xiyi, s4 = sum of xi^2
    printf("enter values xi yi: \n");

    for (int i = 0; i < N; i++)
    {
        scanf("%f %f",&x[i],&y[i]);

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

    printf("thus equation of line is %f x + (%f)\n",a1,a0);


    return 0;
}

