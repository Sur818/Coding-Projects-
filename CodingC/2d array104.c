#include<stdio.h>

int main()
{
 int i,j,n,m;
printf("enter row of array\n");
scanf("%d",&n);
printf("enter collom");
scanf("%d",&m);
int a[n][m];
int b[n][m];
int c[n][m];
printf("enter first matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
}
printf("\n");
}
printf("enter second matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("b[%d][%d]=",i,j);
scanf("%d",&b[i][j]);
}
printf("\n");
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;
}




