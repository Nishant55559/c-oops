#include<iostream>
using namespace std;

class employee{
    int employee_number;
    char employee_name[20];
    float basic;

    public:
    float DA,gross_salary, IT;
    float net_salary;
    void read(){
        cout<<"enter the employee number : \n";
        cin>>employee_number;
        cout<<"enter the employee name: \n";
        cin>>employee_name;
        cout<<"Enter Basic :";
        cin>>basic;

    }
    void calculateSalary(){
        DA = 0.52*basic;
        gross_salary = DA + basic;
        IT =0.3*gross_salary;
       
      net_salary= gross_salary-IT;

    }

    void display(){
        cout<<"Employee name :"<<employee_name<<"\n Employee number:"<<employee_number<<"\n";
        cout<<"BASIC \t DA \t IT \t NET SALARY \t GROSS SALARY \n";
        cout<<basic<<"\t"<<DA<<"\t"<<IT<<"\t"<< net_salary<< "\t"<<gross_salary;
    }
};
   
   int main(){

    employee e;
    e.read();
    e.calculateSalary();
    e.display();
    return 0;
   }