#include<stdio.h>

int main()
{
    int i,j,k,m;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=6-i; j++)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf("%d",k);
        }
           
        for(m=i; m>=1; m--)
        {
          
            printf("%d",m);
        }


    

    printf("\n");
}
return 0;
}