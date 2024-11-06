#include<iostream>
using namespace std;
class Overload{
	public:
		void print(int num){
			cout << "Print integer: " << num << endl;
		}
		void print(double num){
			cout << "Print double: " << num << endl;
		}
		void print(string text){
			cout << "Print string: " << text << endl;
		}
};
int main(){
	Overload obj;
	obj.print(5);
	obj.print(10.2);
	obj.print("Tarun");
	return 0;
}
