#include<iostream>
using namespace std;
class student
{
private:
char name[20];
int rno;
public:
void getstudent()
{
cout<<"enter name of the student=";
cin>>name;
cout<<"enter roll number of the student=";
cin>>rno;
}
void displaystudent()
{
cout<<"name of the student="<<name<<endl;
cout<<"\nroll number of the student="<<rno<<endl;
}
}; // class termination
class address : public student
{
private:
char city[20];
public:
void getaddress()
{
getstudent();
cout<<"\nenter city=";
cin>>city;
}
void displayaddress()
{
displaystudent();
cout<<"\ncity="<<city<<endl;
}
};
int main()
{
address a1;
a1.getaddress();
a1.displayaddress();
return 0;
}