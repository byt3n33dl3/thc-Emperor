#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
    int n;
    printf("enter the n for nxn matrix : ");
    scanf("%d",&n);

    float a[n][n+1],temp;
    double x[n],c,d=0;
    
    // matrix input 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            printf(" enter a[%d][%d] = ",i,j);
            scanf("%f",&a[i][j]);
        }
        
    }

    // pivoting for augmented matrix systems

    for (int i = 0; i < n; i++){
        for (int j = 1+i; j < n; j++){
            if (a[j][0] > a[i][0]){
                for (int k = 0; k < n+1; k++){
                    temp = a[i][k];
                    a[i][k] = a[j][k];
                    a[j][k] = temp;
                }
            }   
        }
    }

    /*  pivoting for case when A and B are separated
        for (int i = 0; i < n; i++){
        for (int j = 1+i; j < n; j++){
            if (a[j][0] > a[i][0]){
                for (int k = 0; k < n+1; k++){
                    if (k < n)
                    {
                        temp = a[i][k];
                        a[i][k] = a[j][k];
                        a[j][k] = temp;
                    }else{   
                        temp = b[i];
                        b[i] = b[j];
                        b[j] = temp;
                    }
                    
                }
            }   
        }
    }
    
    */

        // testing printing

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            printf("%f \t",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}

