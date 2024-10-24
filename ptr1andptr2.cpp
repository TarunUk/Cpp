#include<iostream>
using namespace std;
int main()
{
    int a=49;
    int* ptr1= &a;
    int* ptr2= ptr1+4;
    cout << "ptr1 address: " << ptr1 << endl;
    cout << "ptr2 address: " << ptr2 << endl;
    cout << "ptr2 - ptr1: " << ptr2-ptr1 << endl;
    return 0;
}
