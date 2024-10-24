#include<iostream>
using namespace std;
class device{
	public:
		device(){
			cout<<"Iphone 13.";
		}
};
class price{
	public:
		price(){
			cout<<"\n50 thousand.";
		}
};
class colour{
	public:
		colour(){
			cout<<"\nWhite.";
		}
};
class mobile: public device, public price, public colour{
};
int main(){
	mobile obj;
	return 0;
}
