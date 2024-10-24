#include<iostream>
using namespace std;
class device{
	public:
		device(){
			cout<<"ASUS.";
		}
};
class storage: public device{
	public:
		storage(){
			cout<<"\n1 TB.";
		}
};
class ram: public storage{
	public:
		ram(){
			cout<<"\n16 gb.";
		}
};
class battery: public ram{
	public:
		battery(){
			cout<<"\n150 watt.";
		}
};
class computer: public battery{
};
int main(){
	computer obj;
	return 0;
}
