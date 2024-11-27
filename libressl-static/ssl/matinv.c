#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
    int n;
    printf("enter the n for nxn matrix : ");
    scanf("%d",&n);

    float b[n][n],a[n][2*n];
    double x[n],c,d=0;
    
    // matrix input 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" enter b[%d][%d] = ",i,j);
            scanf("%f",&b[i][j]);
        }
        
    }
    // augmented matrix formation 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {
            if (j<n)
            {
                a[i][j] = b[i][j];
            }else if (j - n == i){
                a[i][j] = 1;
            }else{
                a[i][j] = 0;
            }
            
        }
        
    }
    // print matrix 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <2*n; j++)
        {
            printf("%f\t",a[i][j]);
        }
        printf("\n");
    }

   // gauss jordan method 

   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < n; j++)
    {
        if (i!=j)
        {   
            c = a[j][i]/a[i][i];
            for (int k = 0; k < 2*n; k++)
            {
                a[j][k] = a[j][k] - c*a[i][k]; 
            }
            
        }
        
    }
    
   }
   

    // diagonal elements cinverted to 1

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j < 2*n; j++)
        {
            a[i][j] = a[i][j]/a[i][i];
        }
        
    }
    
    // printing the inverted matrix

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j < 2*n; j++)
        {
            printf("%f\t",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


