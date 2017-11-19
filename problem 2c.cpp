#include<iostream>
using namespace std;

int main()
{
    int a,b;
    int *p;
    p = &a;
    b = *p;
    cout << "a = " << a << "\nb = " << b << "\n*p = " << *p;
 
    int a=2,b=3;
    cout << "a = " << a << "\nb = " << b << "\n*p = " << *p;
    
    p = &b;
   
    cout << "a = " << a << "\nb = " << b << "\n*p = " << *p;
}
