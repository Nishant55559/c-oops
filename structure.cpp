#include<iostream>
using namespace std;

struct cricketer{
    char name[20] ;
    char team[20];
    char type[20];
    int age;
    float average ;
};

struct cricketer c[20];
int main(){
int n ;
cout<<"enter the numbers of players"<< endl;
cin>>n;
for(int i=0; i<=n; i++){
cout<<"enter the name of player"<< endl;
cin>>c[i].name;
cout<<"enter the team of player"<< endl;
cin>>c[i].team;
cout<<"enter the type of player"<< endl;
cin>>c[i].type;
cout<<"enter the age of player"<< endl;
cin>>c[i].age;
cout<<"enter the average of player"<< endl;
cin>>c[i].average;
}

cout<<"NAME \t TEAM \t TYPE \t AGE \t AVERAGE \n ";
for(int i=0; i<=n; i++){
cout<<c[i].name<<"\t"<<c[i].team<<"\t"<<c[i].type<<"\t"<<c[i].age<<"\t"<<c[i].average<<"\n";
}
return 0;
}

