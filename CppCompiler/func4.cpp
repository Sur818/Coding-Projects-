#include<iostream>
using namespace std;
void prime(int num)
{
int flag=0;
for(int i=2;i<=num/2;i++)
{
if(num%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
cout<<" prime no";
}
else
{
cout<<"not prime no";
}
}
int main ()
{
int n;
cout<<"enter any no";
cin>>n;
prime(n);
return 0;
}

