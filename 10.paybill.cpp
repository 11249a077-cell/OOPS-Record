#include<iostream>
using namespace std;
class paybill{
    private:
    int age,accno;
    char name[50];
    float basic,hra,da,pf,gross_salary,net;
    char employeeid[20];
    public:
    void getdata();
    void calculate();
    void displaydata();
};
void paybill::getdata()
{
    cout<<"enter employee name:";
    cin>>name;
    cout<<"enter the employee id:";
    cin>>employeeid;
    cout<<"enter the age of the employee:";
    cin>>age;
    cout<<"enter the account number of the employee:";
    cin>>accno;
    cout<<"enter the basic salary:";
    cin>>basic;
}
void paybill::calculate()
{
    hra=0.20*basic;
    da=0.10*basic;
    pf=0.08*basic;
    gross_salary=basic+hra+da;
    net=gross_salary-pf;
}
void paybill::displaydata()
{
    cout<<"--------------PAY SLIP---------------";
    cout<<"employee name:"<<name<<endl;
    cout<<"employee id:"<<employeeid<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"account number:"<<accno<<endl;
    cout<<"--------\n";
    cout<<"basic salary:"<<basic<<endl;
    cout<<"HRA:"<<hra<<endl;
    cout<<"DA:"<<da<<endl;
    cout<<"PF:"<<pf<<endl;
    cout<<"Gross salary:"<<gross_salary<<endl;
    cout<<"net salary:"<<net<<endl;
};
int main(){
    paybill emp;
    emp.getdata();
    emp.calculate();
    emp.displaydata();
    return 0;
}