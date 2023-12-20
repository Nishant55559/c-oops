#include <iostream>
using namespace std;

class employee
{

      int emp_no;
      char emp_name[20];

public:
      float gross_salary;
      void read()
      {
            cout << "enter the employee no" << endl;
            cin >> emp_no;
            cout << "enter the employee name" << endl;
            cin >> emp_name;
            cout << "enter the gross salary" << endl;
            cin >> gross_salary;
      }
      void display()
      {
            cout << " employee no:" << emp_no<<endl;
            cout << " employee name:" << emp_name<<endl;
            cout << "gross salary :" << gross_salary<<endl;
      }
};
int main()
{

      employee s[10];
      employee temp;
      int n, i, j ;
      cout << "enter the number of employees";
      cin >> n;
      for (int i = 0; i < n; i++)
      {
            s[i].read();
      }
      for (i = 0; i < n; i++)
      {
            for (j = 0; j < n - 1 - i; j++)
            {
                  if (s[j].gross_salary < s[j + 1].gross_salary)
                  {
                         temp = s[j];
                         s[j]= s[j+1];
                         s[j+1]= temp;
                  }
            }
      } 
      s[0].display();
      s[n-1].display();
      
     
      return 0;
}
