#include<iostream>
using namespace std;

int main()
{
int i,j,n;
cout<<"enter no of row:-";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<"*";
}
for(j=1;j<=i-1;j++)
{
cout<<"*";
}
for(j=1;j<=2*(n-i);j++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<"*";
}
for(j=1;j<=i-1;j++)
{
cout<<"*";
}
cout<<"\n";
}
return 0;
}
