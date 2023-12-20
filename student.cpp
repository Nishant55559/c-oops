#include<iostream>
using namespace std;

class student{
    char student_name[20];
    int reg_no;
    float avg_marks,physic,maths,chem,total_marks;

    public:
    
    void read(){
        cout<<"enter the student name : \n";
        cin>>student_name;
        cout<<"enter the Reg no: \n";
        cin>>reg_no;
        cout<<"Enter marks of physics :\n";
        cin>>physic;
        cout<<"Enter marks of maths :\n";
        cin>>maths;
        cout<<"Enter marks of chem :\n";
        cin>>chem;
        

    }
    void calculate_avg_marks(){
       total_marks = physic+maths+chem;
       avg_marks = total_marks/3;
    }

    void display(){
        cout<<"student name :"<<student_name<<endl<<" reg number:"<<reg_no<<endl ;
        cout<<"PHYSICS\tMATHS\tCHEMISTRY\n";
        cout<<physic<<"\t"<<maths<<"\t"<<chem<<"\t"<<endl;
        cout<< "The average marks of student is :"<<avg_marks;
    }
};
   
   int main(){

    student s;
    s.read();
    s.calculate_avg_marks();
    s.display();
    return 0;
   }