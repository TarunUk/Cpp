#include<iostream>
using namespace std;
class A {
	public:
		void func(){
			cout << "Hello World" << endl;
		}
};
class B: public A {
	public:
	void func(){
		cout << "World is Ok" << endl;
	}	
};
int main(){
	// Parent class object
	A obj;
	obj.func();
	// Child class object
	B obj1;
	obj1.func();
	return 0;
}
