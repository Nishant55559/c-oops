#include<iostream>
#include<string.h>
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
for(int i=0; i<n; i++){
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
 
cout<<"NAME\tTEAM\tTYPE\tAGE\tAVERAGE\n";
for(int i=0; i<n; i++)
{
    cout<<c[i].name<<"\t"<<c[i].team<<"\t"<<c[i].type<<"\t"<<c[i].age<<"\t"<<c[i].average<<"\n";
}

cout << "\n\n---------------------------\n";

struct cricketer temp;
for(int i=0; i<n; i++){
    for (int j = 0; j < n-i-1; j++)
    {
        if (strcmp(c[j].name, c[j+1].name)>0)
            {
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        
        
        
        /*if (c[j].average > c[j+1].average)
        {
           temp = c[j];
           c[j] = c[j+1];
           c[j+1] = temp;

        }*/
        
    }
    
  }

cout<<"NAME\tTEAM\tTYPE\tAGE\tAVERAGE\n";
for(int i=0; i<n; i++){
cout<<c[i].name<<"\t"<<c[i].team<<"\t"<<c[i].type<<"\t"<<c[i].age<<"\t"<<c[i].average<<"\n";
}
return 0;
}

