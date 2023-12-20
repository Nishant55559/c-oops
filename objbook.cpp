#include<iostream>
using namespace std;

class book{
    char title[20];
    char author[20];
    int price;
    

    public:
    int isbn;
    void read(){
    cout<<"enter name : ";
    cin>>title;
    cout<<"enter author name : ";
    cin>>author;
    cout<<"enter price : ";
    cin>>price;
    cout<<"enter isbn no.  : ";
    cin>>isbn;
}

void display(){
    cout<<"Title : "<<title <<endl;
     cout<<"author : "<<author <<endl;
      cout<<"Isbn : "<<isbn <<endl;
       cout<<"Price : "<<price <<endl;
    }
};

int main(){
    book b[5];
    int n;
    int i,x;
    int temp;
    int flag = 0;
    cout<<"enter the number of books : ";
    cin>>n;
    for(i=0; i< n; i++){
        b[i].read();
        cout<<"\n------------\n";

    }

    cout<<"enter the isbn no of the book to be searched : ";
    cin>>x;

    for(i=0;i<n;i++){
        if(x==b[i].isbn){
            cout<<"book found";
            flag=1;
            temp = i;
            break;
        }
    }
    if(flag==0){
        cout<<"book not found";
    }

    if(flag == 1){
        b[temp].display();
    }
    return 0;
}