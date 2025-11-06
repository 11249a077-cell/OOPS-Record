#include<iostream>
using namespace std;
class book{
    private:
    int pages;
    char bookname[50],author[50];
    float price;
    public:
    void inputdetails(){
        cout<<"enter the name of the book:";
        cin>>bookname;
        cout<<"enter th name of author:";
        cin>>author;
        cout<<"enter the number of pages";
        cin>>pages;
        cout<<"enter the price of the book";
        cin>>price;
    }
    void displaydetails(){
        cout<<"\n books details"<<endl;
        cout<<"bookname:"<< bookname <<endl;
        cout<<"author:"<< author <<endl;
        cout<<"pages:"<< pages <<endl;
        cout<<"price:"<< price <<endl;
    }
    };
    int main(){
        book b1;
        b1.inputdetails();
        b1.displaydetails();
        return 0;
    }

