#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter a & b respectively : ";
    cin >> a >> b;
    int *p;
    p = &a;
    b = *p;
    cout << "a = " << a << "\nb = " << b << "\n*p = " << *p;
}
