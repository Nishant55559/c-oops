#include<iostream>
using namespace std;
main(){
     int input;
    cout<<"1. play the game"<<endl;
    cout<<"2. start the new game"<<endl;
    cout<<"3. exit the game "<<endl;
    cin>> input; 
    
    switch (input)
    {
    case 1: cout<<"load the game";
        break;
    case 2: cout<<"new game is starting";
    break;
    case 3: cout<<"exiting";
    break;     
    
    default: cout<<"invalid input";
        break;
    }
}