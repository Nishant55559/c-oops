#include<iostream>
using namespace std;

          class dm;
          class db{
 
                     float feet;
                     float inch;
 
                  public:
                         void read(){

                         cout<<"enter the value in feet:"<<endl;
                         cin>>feet;
                         cout<<"enter the value in inch:"<<endl;
                         cin>>inch;
                         }
               friend float add(dm ob1, db ob2 ){
                        ob1.meter *= 0.3;
                        ob1.cm = ob1.cm *0.39;
                        cout<<ob1.meter<<":"<<ob1.cm<<endl;
                        }

          };

          class dm{

                  float meter, cm;
 
                  public:
                        void read(){

                         cout<<"enter the value in meter:"<<endl;
                         cin>>meter;
                         cout<<"enter the value in cm:"<<endl;
                         cin>>cm;
                        }
            friend float add(dm ob1, db ob2 ){
                        ob2.feet *= 3.28;
                        ob2.inch = ob2.inch *2.54;
                        cout<<ob2.feet<<":"<<ob2.inch<<endl;
                        }



          };