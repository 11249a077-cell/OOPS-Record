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
        cout<<"enter age:";
        cin>>age;
        cout<<"enter course:";
        cin>>course;
    }
    void displaydeatils(){
        cout<<"\nstudent information\n";
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"course:",course<<endl;
    }
};
int main(){
    student s1;
    s1.getdata();
    s1.displaydetails();
    return 0;
}