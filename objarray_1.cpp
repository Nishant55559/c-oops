#include<iostream>
using namespace std;

class student{
   
int usn;
char name[20];
float marks[3];
float avg;
public:

void read(){
    cout<<"enter name : ";
    cin>>name;
    cout<<"enter usn : ";
    cin>>usn;
    cout<<"enter marks : ";
    for(int i =  0 ; i<3;i++){
        cout<<"enter marks of subject "<<i+1<<endl;
        cin>>marks[i];
        }
}

void sort(){
    int i ,j;
    float temp;
    for(i=0;i<3;i++){
        for(j=0; j<3-1-i; j++){
            if(marks[j]<marks[j+1]){
               temp = marks[j];
               marks[j] = marks[j+1];
               marks[j+1] = temp; 
            }
        }
    }

    cout<<"the better marks are "<<marks[0]<<endl<<marks[1]<<endl;
    }

void average(){
    avg = (marks[0] + marks[1])/2;
}

void display(){
    cout<<"Name : "<<name <<endl;
    cout<<"USN : "<<usn<<endl;
    cout<<"Average marks  : "<<avg<<endl;

}


};


int main(){
 student s[10];
 int n;
 cout<<"enter the number of students";
 cin>>n;
 for (int i = 0; i< n; i++ ){
    s[i].read();
    s[i].sort();
    s[i].average();
 }

for(int i =0; i< n;i++){
    s[i].display();
    cout<<"--------------------";
}
return 0;
}