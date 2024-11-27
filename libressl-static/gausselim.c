#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int n;
    printf("please enter n of nxn matrix: ");
    scanf("%d",&n);

    float a[n][n+1],sum=0;
    float x[n],c;
    // input
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n + 1; j++){
            
            printf("enter a[%d][%d] = ",i,j);
            scanf("%f",&a[i][j]);
        }
    }
    
    // triangularisation 

    for (int i = 0; i <= n - 2; i++)
    {
        for (int k = 1+i; k <= n-1; k++)
        {
            c =  (a[k][i]/a[i][i]);
            for (int j = 0; j <= n; j++)
            {
               //  c =  (a[k][i]/a[i][i])
                a[k][j] = a[k][j] - c*a[i][j];
                
            }
        }
    }

    // testing printing
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n + 1; j++){
            
            printf("%f \t",a[i][j]);
        }
        printf("\n");
    }

    x[n-1] = a[n-1][n]/a[n-1][n-1];
    printf("%f \n",x[n-1]);

    for (int i = n-2; i >= 0; i--)
    {   
        sum = 0;
        for (int j = i+1; j <= n-1; j++){   
            sum += a[i][j]*x[j] ;   
        }
        x[i] = (a[i][n] - sum)/a[i][i] ;
        printf("%f \n",x[i]);
    }
    
    
    return 0;
}