#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;
int main()
{
     
      double num = 200 , squareroot;
      squareroot = sqrt(num);
     cout << squareroot << endl;
    string a = "Coding Ninjas";
    for (int i = 0; i < a.length(); i++)
    {
        putchar(tolower(a[i]));
    }

    return 0;
}