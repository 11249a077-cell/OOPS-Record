#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
const int sz=90;
class mystring{
    char str[sz];
    public:
    mystring()
    {
        strcpy(str," ");
    }
    mystring(char s[])
    {
        strcpy(str,s);
    }
    void display()
    {
        cout<<str<<"\n";
    }
    mystring operator+(mystring ss)
    {
         mystring temp;
        if(strlen(str)+strlen(ss.str)<sz)
        {
           
            strcpy(temp.str,str);
            strcat(temp.str,ss.str);
        }
        else{
        cout<<"string overflow!\n";
        }
        return temp;
    }
};
int main(){
    mystring s1="Hello";
    mystring s2="World";
    mystring s3;
    s3=s1 + s2;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}