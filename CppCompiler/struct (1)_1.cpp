#include<iostream>
using namespace std;

struct subject
{
string sub_name;
int marks;
int sum;
int per;
};

struct home
{
string home_name;
int no_condidate;
string name[10];
int age [10];
string school_name[10];
int no_sub[10];
struct subject s[10];
};

struct stu_village
{
string vill_name;
int no;
struct home h[10];
};


struct stu_village *getdata(struct stu_village v[10],int n)
{
int i,j,k,t;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter village name:-";
getline(cin,v[i].vill_name);
cout<<"no of home in this village:-";
cin>>v[i].no;
for(j=0;j<v[i].no;j++)
{
cin.ignore();
cout<<"enter home name:-";
getline(cin,v[i].h[j].home_name);
cout<<"no of conditate:-";
cin>>v[i].h[j].no_condidate;
for(k=0;k<v[i].h[j].no_condidate;k++)
{
cin.ignore();
cout<<"conditate name:-";
getline(cin,v[i].h[j].name[k]);
cout<<"conditate age:-";
cin>>v[i].h[j].age[k];
cin.ignore();
cout<<"enter school name:-";
getline(cin,v[i].h[j].school_name[k]);
cout<<"no of Subject:-";
cin>>v[i].h[j].no_sub[k];
v[i].h[j].s[k].sum=0;
for(t=0;t<v[i].h[j].no_sub[k];t++)
{
cin.ignore();
cout<<"enter sub name:-";
getline(cin,v[i].h[j].s[t].sub_name);
cout<<"enter sub marks:-";
cin>>v[i].h[j].s[t].marks;
v[i].h[j].s[k].sum+=v[i].h[j].s[t].marks;
}
v[i].h[j].s[k].per=(v[i].h[j].s[k].sum)/(v[i].h[j].no_sub[k]);

}
cout<<"\n";
}
cout<<"\n\n";
}
return v;
}


void print_details(struct stu_village v[10],int i,int j,int k)
{
int x;
cout<<"name of village:-"<<v[i].vill_name<<endl;
cout<<"home name:-"<<v[i].h[j].home_name<<endl;
cout<<"conditate name:-"<<v[i].h[j].name[k]<<endl;
cout<<"age:-"<<v[i].h[j].age[k]<<endl;
cout<<"school name:-"<<v[i].h[j]. school_name[k]<<endl;
for(x=0;x<v[i].h[j].no_sub[k];x++)
{
cout<<v[i].h[j].s[x].sub_name<<"="<<v[i].h[j].s[x].marks<<endl;
cout<<"\n";
}
cout<<v[i].h[j].s[k].per<<endl;
}




int main()
{
int i,j,k,n,perc;
struct stu_village v[10],*v1;
cout<<"enter no of village:-";
cin>>n;
v1=getdata(v,n);
cout<<"enter per criteria:-";
cin>>perc;
for(i=0;i<n;i++)
{
for(j=0;j<v1[i].no;j++)
{
for(k=0;k<v1[i].h[j].no_condidate;k++)
{
if(v1[i].h[j].s[k].per<=perc)
{
print_details(v1,i,j,k);
}
}
}
}
return 0;
}





    