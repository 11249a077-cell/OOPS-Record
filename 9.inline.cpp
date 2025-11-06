#include<iostream>
using namespace std;
inline int add(int a, int b)
{
    return a+b;
}
int main()
{
    int sum1=add(58,34);
    cout<<"sum of those two numbers are:"<<sum1<<endl;
    int sum2=add(48,24);
    cout<<"sum of those two numbrs are:"<<sum2<<endl;
    return 0;
}