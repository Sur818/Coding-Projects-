#include<stdio.h>

int main()
{
    int n,x,m;
  float p;
     double sum=0.0;
    printf("Enter your no =");
    scanf("%d",&n);
    for(x=1; x<=n-2; x++)
    {
        
        if(x%2!=0)
        {
            m=(x+2);
            printf("%d*%d/(%d*%d)+(%d*%d)",x,x,x,x,m,m);
         p=((float)(x*x)/((float)(x*x)+(float)(m*m)));
           sum=sum+p;
             if(x<=n-2)
        {
        printf("  +  ");
         
        }
        
       }
    }
    printf("\n\nyour sum of seriese=%f",sum);
    return 0;
    }