#include<iostream>
using namespace std;

class student
{
public:
int roll_no;
int age;
string name;
int input()
{
cout<<"enter roll no:-";
cin>>roll_no;
cout<<"enter age:-";
cin>>age;
cin.ignore();
cout<<"enter name:-";
getline(cin,name);
}
};
void display(student obj)
{
cout<<"name="<<obj.name<<endl;
cout<<"age="<<obj.age<<endl;
cout<<"roll no:-"<<obj.roll_no<<endl;
}

int main()
{
student obj;
obj.input();
display(obj);
}

