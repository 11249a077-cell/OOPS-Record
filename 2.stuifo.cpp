#include<iostream>
using namespace std;
class student{
    private:
    int rollno,m1,m2,m3,total;
    char name[50];
    float avg;
    public:
    void getdata(){
        cout<<"enter student name:";
        cin>>name;
        cout<<"enter rollno:";
        cin>>rollno;
        cout<<"enter 3 marks:";
        cin>>m1>>m2>>m3;
    }
    void claculate(){
        total=m1+m2+m3;
        avg=total/3;
    }
    void print(){
        cout<<"\nname:"<<name;
        cout<<"\nrollno:"<<rollno;
        cout<<"\n mark1:"<<m1;
        cout<<"\n mark2:"<<m2;
        cout<<"\n mark3:"<<m3;
        cout<<"\n total:"<<total;
        cout<<"\n average:"<<avg<<"\n";
    }
    };
int main()
{
   int n;
   cout<<"enter number of students:";
   cin>>n;
   student s[100];
   for (int i=0;i<n;i++)
   {
    cout<<"\n enter details for student"<<i+1<<":\n";
s[i].getdata();
s[i].claculate();
   }
   cout<<"\n STUDENT DATA\n";
   for(int i=0;i<n;i++)
   {
    s[i].print();
   }
}
