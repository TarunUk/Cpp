#include<iostream>
using namespace std;
int main()
{
    int a=20;
    int *p;
    p=&a;
    cout << a << &a << endl;
    cout << p << &p << *p;
}
