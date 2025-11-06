#include<iostream>
using namespace std;
int main(){
    float fastingsugar,postmealsugar;
    cout<<"enter the fasting blood sugar level:";
    cin>>fastingsugar;
    cout<<"enter the postmeal blood sugar level:";
    cin>>postmealsugar;
    if(fastingsugar>=126||postmealsugar>=200){
        cout<<"the patient is diabatic"<<endl;
    }else{
        cout<<"the patint isnt diabatic"<<endl;
    }
    return 0;
}
