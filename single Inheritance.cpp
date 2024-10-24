#include<iostream>
using namespace std;
class myNAME{
	public:
		myNAME(){
			cout<<"My name is tarun.";
		}
};
class home: public myNAME{
};
int main(){
home obj;
return 0;
}
